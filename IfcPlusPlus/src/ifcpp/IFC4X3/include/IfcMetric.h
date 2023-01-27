/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcConstraint.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcBenchmarkEnum;
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcMetricValueSelect;
	class IFCQUERY_EXPORT IfcReference;
	//ENTITY
	class IFCQUERY_EXPORT IfcMetric : public IfcConstraint
	{
	public:
		IfcMetric() = default;
		IfcMetric( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 11; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3368373690; }

		// IfcConstraint -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>										m_Name;
		//  shared_ptr<IfcText>											m_Description;				//optional
		//  shared_ptr<IfcConstraintEnum>								m_ConstraintGrade;
		//  shared_ptr<IfcLabel>										m_ConstraintSource;			//optional
		//  shared_ptr<IfcActorSelect>									m_CreatingActor;			//optional
		//  shared_ptr<IfcDateTime>										m_CreationTime;				//optional
		//  shared_ptr<IfcLabel>										m_UserDefinedGrade;			//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
		//  std::vector<weak_ptr<IfcResourceConstraintRelationship> >	m_PropertiesForConstraint_inverse;

		// IfcMetric -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcBenchmarkEnum>								m_Benchmark;
		shared_ptr<IfcLabel>										m_ValueSource;				//optional
		shared_ptr<IfcMetricValueSelect>							m_DataValue;				//optional
		shared_ptr<IfcReference>									m_ReferencePath;			//optional
	};
}
