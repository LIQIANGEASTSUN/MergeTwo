using System;
using Framework.Core.Services.Backend.Remote.Payloads.BoardState;
using MergeEngine.ECS.Util;
using Merger.Bubbles.ECS.Systems;
using Zenject;

namespace MergeEngine.ECS.Systems.State.Board
{
	public class FreeVouchersStateSystem : StateSystemBase<CoreBoardFreeVouchers>
	{
		[Inject]
		[NonSerialized]
		public new ISystemManager _systemManager;

		[InjectSystem]
		[NonSerialized]
		public BubbledItemSystem _bubbledItemSystem;

		public override void LoadState(CoreBoardFreeVouchers newState)
		{
		}

		public void UpdateFreeBurst(int value)
		{
		}
	}
}
