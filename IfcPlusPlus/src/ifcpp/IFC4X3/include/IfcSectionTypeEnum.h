/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcSectionTypeEnum = ENUMERATION OF	(TAPERED	,UNIFORM);
	class IFCQUERY_EXPORT IfcSectionTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcSectionTypeEnumEnum
		{
			ENUM_TAPERED,
			ENUM_UNIFORM
		};

		IfcSectionTypeEnum() = default;
		IfcSectionTypeEnum( IfcSectionTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 2342653256; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcSectionTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcSectionTypeEnumEnum m_enum;
	};
}
