/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcBoolean.h"
#include "ifcpp/IFC4X3/include/IfcFaceOuterBound.h"
#include "ifcpp/IFC4X3/include/IfcLoop.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcFaceOuterBound 
IFC4X3::IfcFaceOuterBound::IfcFaceOuterBound( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcFaceOuterBound::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFaceOuterBound> copy_self( new IfcFaceOuterBound() );
	if( m_Bound ) { copy_self->m_Bound = dynamic_pointer_cast<IfcLoop>( m_Bound->getDeepCopy(options) ); }
	if( m_Orientation ) { copy_self->m_Orientation = dynamic_pointer_cast<IfcBoolean>( m_Orientation->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcFaceOuterBound::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCFACEOUTERBOUND" << "(";
	if( m_Bound ) { stream << "#" << m_Bound->m_tag; } else { stream << "$"; }
	stream << ",";
	if( m_Orientation ) { m_Orientation->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcFaceOuterBound::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcFaceOuterBound::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcFaceOuterBound, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Bound, map, errorStream );
	m_Orientation = IfcBoolean::createObjectFromSTEP( args[1], map, errorStream );
}
void IFC4X3::IfcFaceOuterBound::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcFaceBound::getAttributes( vec_attributes );
}
void IFC4X3::IfcFaceOuterBound::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcFaceBound::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcFaceOuterBound::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcFaceBound::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcFaceOuterBound::unlinkFromInverseCounterparts()
{
	IfcFaceBound::unlinkFromInverseCounterparts();
}