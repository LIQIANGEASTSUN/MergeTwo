using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class IIndependentGoodsMergeVo : BaseVO
{
	public int goodsID;

	public int iapTag = -1;

	public string mergeDrop = "";

	private List<BaseData3VO> mCertainDrops;

	public List<BaseData3VO> GetCertainDrops()
	{
		if (mCertainDrops == null)
		{
			mCertainDrops = BaseData3VO.GetBaseData3VOList(mergeDrop);
		}
		return mCertainDrops;
	}
}
