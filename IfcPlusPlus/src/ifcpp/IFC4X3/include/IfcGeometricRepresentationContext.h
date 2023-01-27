/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCoordinateReferenceSystemSelect.h"
#include "IfcRepresentationContext.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcDimensionCount;
	class IFCQUERY_EXPORT IfcReal;
	class IFCQUERY_EXPORT IfcAxis2Placement;
	class IFCQUERY_EXPORT IfcDirection;
	class IFCQUERY_EXPORT IfcGeometricRepresentationSubContext;
	class IFCQUERY_EXPORT IfcCoordinateOperation;
	//ENTITY
	class IFCQUERY_EXPORT IfcGeometricRepresentationContext : virtual public IfcCoordinateReferenceSystemSelect, public IfcRepresentationContext
	{
	public:
		IfcGeometricRepresentationContext() = default;
		IfcGeometricRepresentationContext( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 6; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 3448662350; }

		// IfcRepresentationContext -----------------------------------------------------------
		// attributes:
		//  shared_ptr<IfcLabel>											m_ContextIdentifier;		//optional
		//  shared_ptr<IfcLabel>											m_ContextType;				//optional
		// inverse attributes:
		//  std::vector<weak_ptr<IfcRepresentation> >						m_RepresentationsInContext_inverse;

		// IfcGeometricRepresentationContext -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcDimensionCount>									m_CoordinateSpaceDimension;
		shared_ptr<IfcReal>												m_Precision;				//optional
		shared_ptr<IfcAxis2Placement>									m_WorldCoordinateSystem;
		shared_ptr<IfcDirection>										m_TrueNorth;				//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcGeometricRepresentationSubContext> >	m_HasSubContexts_inverse;
		std::vector<weak_ptr<IfcCoordinateOperation> >					m_HasCoordinateOperation_inverse;
	};
}
