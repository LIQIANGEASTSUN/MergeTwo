using System;
using GameCore.Configuration.WeakReferences;
using GameCore.Configuration.WeakReferences.Providers;
using MergeEngine.Configuration.Board;
using MergeEngine.Model.Configuration;
using Zenject;

namespace MergeEngine.Configuration.Definitions.WeakReferences.Providers
{
	public class MergeBoardProvider : WeakReferenceTargetProvider<IBoard, string>
	{
		[Inject]
		[NonSerialized]
		public IStartingBoardConfigurationModel _startingBoardConfigurationModel;

		public override IBoard ProvideInstance(WeakReference<IBoard, string> reference)
		{
			return null;
		}
	}
}
