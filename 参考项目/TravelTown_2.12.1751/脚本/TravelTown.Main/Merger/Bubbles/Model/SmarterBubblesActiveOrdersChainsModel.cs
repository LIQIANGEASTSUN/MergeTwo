using System;
using System.Collections.Generic;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using Merger.Services.MergeGraphChain;
using Zenject;

namespace Merger.Bubbles.Model
{
	public class SmarterBubblesActiveOrdersChainsModel : ModelBase, ISmarterBubblesActiveOrdersChainsModel
	{
		[Inject]
		[NonSerialized]
		public IMergeGraphChainModel _mergeGraphChainModel;

		public HashSet<IMergeGraphItem> GetRelatedGraphs(IMergeItem objectiveItem)
		{
			return null;
		}
	}
}
