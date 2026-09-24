using System;
using System.Collections.Generic;
using MergeEngine.ECS;
using Merger.Game.Views.BoardItem.ViewBehaviourAttachers;
using Zenject;

namespace Merger.Game.Views.BoardItem
{
	public class BoardItemViewBehaviourFactory : IBoardItemViewBehaviourFactory
	{
		[NonSerialized]
		public readonly DiContainer _container;

		[NonSerialized]
		public readonly List<IViewBehaviourAttacher> _attachers;

		[Inject]
		public BoardItemViewBehaviourFactory(DiContainer container, IExternalBoardItemViewBehaviour[] factories)
		{
		}

		public void CreateAttachers()
		{
		}

		public void CreateExternalAttachers(IExternalBoardItemViewBehaviour[] factories)
		{
		}

		public void RegisterAttacher<TViewBehaviourAttacher>() where TViewBehaviourAttacher : IViewBehaviourAttacher, new()
		{
		}

		public void AddBehaviours(Entity entity, BoardItemView2 boardItemView2)
		{
		}
	}
}
