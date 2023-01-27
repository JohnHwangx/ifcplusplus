/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcCartesianPointList3D.h"
#include "ifcpp/IFC4X3/include/IfcLabel.h"
#include "ifcpp/IFC4X3/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4X3/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4X3/include/IfcStyledItem.h"

// ENTITY IfcCartesianPointList3D 
IFC4X3::IfcCartesianPointList3D::IfcCartesianPointList3D( int tag ) { m_tag = tag; }
void IFC4X3::IfcCartesianPointList3D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_tag << "= IFCCARTESIANPOINTLIST3D" << "(";
	writeTypeOfRealList2D( stream, m_CoordList, false );
	stream << ",";
	if( m_TagList.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_TagList.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcLabel>& type_object = m_TagList[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ");";
}
void IFC4X3::IfcCartesianPointList3D::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcCartesianPointList3D::readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCartesianPointList3D, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList2D( args[0], m_CoordList );
	readTypeOfStringList( args[1], m_TagList );
}
void IFC4X3::IfcCartesianPointList3D::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcCartesianPointList::getAttributes( vec_attributes );
	shared_ptr<AttributeObjectVector> CoordList_vector( new AttributeObjectVector() );
	vec_attributes.emplace_back( std::make_pair( "CoordList", CoordList_vector ) );
	for( size_t ii=0; ii<m_CoordList.size(); ++ii )
	{
		const std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii = m_CoordList[ii];
		shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
		CoordList_vector->m_vec.push_back( inner_vector );
		std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
	}
	shared_ptr<AttributeObjectVector> TagList_vec_object( new AttributeObjectVector() );
	std::copy( m_TagList.begin(), m_TagList.end(), std::back_inserter( TagList_vec_object->m_vec ) );
	vec_attributes.emplace_back( std::make_pair( "TagList", TagList_vec_object ) );
}
void IFC4X3::IfcCartesianPointList3D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcCartesianPointList::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcCartesianPointList3D::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCartesianPointList::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcCartesianPointList3D::unlinkFromInverseCounterparts()
{
	IfcCartesianPointList::unlinkFromInverseCounterparts();
}
