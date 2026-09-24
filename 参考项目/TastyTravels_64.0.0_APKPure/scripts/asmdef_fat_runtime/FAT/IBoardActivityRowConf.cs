using System.Collections.Generic;

namespace FAT
{
	public interface IBoardActivityRowConf
	{
		IList<int> GetRowConfIdList(int detailId);

		string GetRowConfStr(int rowId);

		int GetCycleStartRowId(int detailId);
	}
}
