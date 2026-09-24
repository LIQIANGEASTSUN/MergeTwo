using System;
using System.Collections.Generic;
using TLF;

[Serializable]
public class BagGeneratorStorageVO : BaseVO
{
	public bool openState;

	public Dictionary<int, List<GameGoodsVo>> m_bagGeneratorStorageDic = new Dictionary<int, List<GameGoodsVo>>();

	public Dictionary<int, int> showGuideGoodsDic = new Dictionary<int, int>();

	public bool BagNewUIState;

	public int newBagShowedTab = -1;

	public List<int> newBagOpenIds = new List<int>();

	public bool isNewUser;
}
