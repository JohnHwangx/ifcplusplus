/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcResourceObjectSelect.h"
namespace IFC4X3
{
	class IFCQUERY_EXPORT IfcIdentifier;
	class IFCQUERY_EXPORT IfcLabel;
	class IFCQUERY_EXPORT IfcText;
	class IFCQUERY_EXPORT IfcDateTime;
	class IFCQUERY_EXPORT IfcActorSelect;
	class IFCQUERY_EXPORT IfcExternalReferenceRelationship;
	class IFCQUERY_EXPORT IfcRelAssociatesApproval;
	class IFCQUERY_EXPORT IfcResourceApprovalRelationship;
	class IFCQUERY_EXPORT IfcApprovalRelationship;
	//ENTITY
	class IFCQUERY_EXPORT IfcApproval : virtual public IfcResourceObjectSelect, public BuildingEntity
	{
	public:
		IfcApproval() = default;
		IfcApproval( int id );
		virtual void getStepLine( std::stringstream& stream ) const;
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
		virtual uint8_t getNumAttributes() const { return 9; }
		virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
		virtual void unlinkFromInverseCounterparts();
		virtual uint32_t classID() const { return 130549933; }

		// IfcApproval -----------------------------------------------------------
		// attributes:
		shared_ptr<IfcIdentifier>									m_Identifier;				//optional
		shared_ptr<IfcLabel>										m_Name;						//optional
		shared_ptr<IfcText>											m_Description;				//optional
		shared_ptr<IfcDateTime>										m_TimeOfApproval;			//optional
		shared_ptr<IfcLabel>										m_Status;					//optional
		shared_ptr<IfcLabel>										m_Level;					//optional
		shared_ptr<IfcText>											m_Qualifier;				//optional
		shared_ptr<IfcActorSelect>									m_RequestingApproval;		//optional
		shared_ptr<IfcActorSelect>									m_GivingApproval;			//optional
		// inverse attributes:
		std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
		std::vector<weak_ptr<IfcRelAssociatesApproval> >			m_ApprovedObjects_inverse;
		std::vector<weak_ptr<IfcResourceApprovalRelationship> >		m_ApprovedResources_inverse;
		std::vector<weak_ptr<IfcApprovalRelationship> >				m_IsRelatedWith_inverse;
		std::vector<weak_ptr<IfcApprovalRelationship> >				m_Relates_inverse;
	};
}
