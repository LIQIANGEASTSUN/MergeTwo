using System;
using System.Collections.Generic;

namespace MergePuzzle
{
	[Serializable]
	public class KiteItemChain
	{
		public int ChainIndex;

		public List<KiteItemLink> Links;

		public void Initialize()
		{
		}
	}
}
