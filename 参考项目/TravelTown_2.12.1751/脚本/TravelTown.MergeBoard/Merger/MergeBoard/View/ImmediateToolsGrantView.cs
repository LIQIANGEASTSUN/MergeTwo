using System.Collections.Generic;
using ContextualizedECS.Context;
using Framework.Core.MVVM.View;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Inventory;
using Merger.MergeBoard.Data;
using Merger.MergeBoard.Handlers;
using Merger.MergeBoard.ViewModel;
using Prefabs.Merging.MergingMetaFloatingButton;
using UnityEngine;
using strange.extensions.promise.api;

namespace Merger.MergeBoard.View
{
	public class ImmediateToolsGrantView : ViewBase<ImmediateToolsGrantViewModel>, IPostTickBoardItemAnimationHandler
	{
		[SerializeField]
		public MergingMetaFloatingButtonView _mergingMetaFloatingButtonView;

		[SerializeField]
		public ImmediateToolsAnimationContainerView _immediateToolsAnimationContainerView;

		public void Awake()
		{
		}

		public bool CanHandle(TickArgs tickArgs)
		{
			return false;
		}

		public IPromise HandleAnimation(TickArgs tickArgs, PostTickBoardItemAnimationContext context)
		{
			return null;
		}

		public IPromise HandleToolBoxCollectAnimation(IList<IMergeItem> collectedTools, int position, PostTickBoardItemAnimationContext context)
		{
			return null;
		}

		public List<(IMergeItem, ResourceMultiple)> UpdateInventoryAndResources(IList<IMergeItem> collectedTools)
		{
			return null;
		}
	}
}
