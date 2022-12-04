/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcMeasureValue.h"
#include "ifcpp/IFC4X3/include/IfcComplexNumber.h"

// TYPE IfcComplexNumber = ARRAY [1:2] OF REAL;
shared_ptr<BuildingObject> IFC4X3::IfcComplexNumber::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcComplexNumber> copy_self( new IfcComplexNumber() );
	for( size_t ii=0; ii<m_vec.size(); ++ii )
	{
		double item_ii = m_vec[ii];
		copy_self->m_vec.emplace_back( item_ii );
	}
	return copy_self;
}
void IFC4X3::IfcComplexNumber::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCOMPLEXNUMBER("; }
	writeRealList( stream, m_vec );
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcComplexNumber> IFC4X3::IfcComplexNumber::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcComplexNumber>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcComplexNumber>(); }
	shared_ptr<IfcComplexNumber> type_object( new IfcComplexNumber() );
	readRealList( arg, type_object->m_vec );
	return type_object;
}