/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcControl.h"
#include "ifcpp/IFC4X3/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4X3/include/IfcIdentifier.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4X3/include/IfcRelAggregates.h"
#include "ifcpp/IFC4X3/include/IfcRelAssigns.h"
#include "ifcpp/IFC4X3/include/IfcRelAssignsToControl.h"
#include "ifcpp/IFC4X3/include/IfcRelAssociates.h"
#include "ifcpp/IFC4X3/include/IfcRelDeclares.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4X3/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4X3/include/IfcRelNests.h"
#include "ifcpp/IFC4X3/include/IfcText.h"

// ENTITY IfcControl 
IFC4X3::IfcControl::IfcControl( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcControl::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcControl> copy_self( new IfcControl() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcControl::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCONTROL" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcControl::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcControl::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcControl, expecting 6, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map, errorStream );
	readEntityReference( args[1], m_OwnerHistory, map, errorStream );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map, errorStream );
	m_Description = IfcText::createObjectFromSTEP( args[3], map, errorStream );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map, errorStream );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map, errorStream );
}
void IFC4X3::IfcControl::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcObject::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Identification", m_Identification ) );
}
void IFC4X3::IfcControl::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcObject::getAttributesInverse( vec_attributes_inverse );
	if( !m_Controls_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> Controls_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_Controls_inverse.size(); ++i )
		{
			if( !m_Controls_inverse[i].expired() )
			{
				Controls_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcRelAssignsToControl>( m_Controls_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "Controls_inverse", Controls_inverse_vec_obj ) );
	}
}
void IFC4X3::IfcControl::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcObject::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcControl::unlinkFromInverseCounterparts()
{
	IfcObject::unlinkFromInverseCounterparts();
}