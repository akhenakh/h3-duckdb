#include "h3_common.hpp"

namespace duckdb {

void ThrowH3Error(H3Error err) {
	if (err) {
		throw FatalException(StringUtil::Format("H3 error: '%d'", err));
	}
}

} // namespace duckdb
