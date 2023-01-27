/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCompositeCurveSegment.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcParameterValue;
	//ENTITY
	class IFCQUERY_EXPORT IfcReparametrisedCompositeCurveSegment : public IfcCompositeCurveSegment
	{
	public:
		IfcReparametrisedCompositeCurveSegment() = default;
		IfcReparametrisedCompositeCurveSegment( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 4; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 816062949; }

		// IfcRepresentationItem -----------------------------------------------------------
		// inverse attributes:
		//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
		//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

		// IfcGeometricRepresentationItem -----------------------------------------------------------

		// IfcSegment -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcTransitionCode>							m_Transition;
		// inverse attributes:
		//  std::vector<weak_ptr<IfcCompositeCurve> >				m_UsingCurves_inverse;

		// IfcCompositeCurveSegment -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcBoolean>									m_SameSense;
		//  shared_ptr<IfcCurve>									m_ParentCurve;

		// IfcReparametrisedCompositeCurveSegment -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcParameterValue>							m_ParamLength;
	};
}
