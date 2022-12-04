/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcAnalysisModelTypeEnum.h"

// TYPE IfcAnalysisModelTypeEnum = ENUMERATION OF	(IN_PLANE_LOADING_2D	,LOADING_3D	,OUT_PLANE_LOADING_2D	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcAnalysisModelTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAnalysisModelTypeEnum> copy_self( new IfcAnalysisModelTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcAnalysisModelTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCANALYSISMODELTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_IN_PLANE_LOADING_2D:	stream << ".IN_PLANE_LOADING_2D."; break;
		case ENUM_LOADING_3D:	stream << ".LOADING_3D."; break;
		case ENUM_OUT_PLANE_LOADING_2D:	stream << ".OUT_PLANE_LOADING_2D."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcAnalysisModelTypeEnum> IFC4X3::IfcAnalysisModelTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcAnalysisModelTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcAnalysisModelTypeEnum>(); }
	shared_ptr<IfcAnalysisModelTypeEnum> type_object( new IfcAnalysisModelTypeEnum() );
	if( std_iequal( arg, ".IN_PLANE_LOADING_2D." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_IN_PLANE_LOADING_2D;
	}
	else if( std_iequal( arg, ".LOADING_3D." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_LOADING_3D;
	}
	else if( std_iequal( arg, ".OUT_PLANE_LOADING_2D." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_OUT_PLANE_LOADING_2D;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAnalysisModelTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}