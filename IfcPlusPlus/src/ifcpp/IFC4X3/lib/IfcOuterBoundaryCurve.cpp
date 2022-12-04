/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcLogical.h"
#include "ifcpp/IFC4X3/include/IfcOuterBoundaryCurve.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcSegment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcOuterBoundaryCurve 
IFC4X3::IfcOuterBoundaryCurve::IfcOuterBoundaryCurve( int tag ) { m_tag = tag; }
shared_ptr<BuildingObject> IFC4X3::IfcOuterBoundaryCurve::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcOuterBoundaryCurve> copy_self( new IfcOuterBoundaryCurve() );
	for( size_t ii=0; ii<m_Segments.size(); ++ii )
	{
		auto item_ii = m_Segments[ii];
		if( item_ii )
		{
			copy_self->m_Segments.emplace_back( dynamic_pointer_cast<IfcSegment>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	return copy_self;
}
void IFC4X3::IfcOuterBoundaryCurve::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCOUTERBOUNDARYCURVE" << "(";
	writeEntityList( stream, m_Segments );
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcOuterBoundaryCurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcOuterBoundaryCurve::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcOuterBoundaryCurve, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_Segments, map, errorStream );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[1], map, errorStream );
}
void IFC4X3::IfcOuterBoundaryCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcBoundaryCurve::getAttributes( vec_attributes );
}
void IFC4X3::IfcOuterBoundaryCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcBoundaryCurve::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcOuterBoundaryCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundaryCurve::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcOuterBoundaryCurve::unlinkFromInverseCounterparts()
{
	IfcBoundaryCurve::unlinkFromInverseCounterparts();
}