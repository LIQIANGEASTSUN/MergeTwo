using System;
using System.Collections.Generic;
using Merger.Audio.ViewModels;
using Merger.MergeBoard.Handlers;
using Merger.Services.HapticFeedback;
using Zenject;

namespace Merger.MergeBoard.ViewModel
{
	public class MergeBoardItemsAnimationsViewModel : AudioViewModelBase
	{
		[Inject]
		[NonSerialized]
		public List<IPostTickBoardItemAnimationHandler> _animationHandlers;

		[Inject]
		[NonSerialized]
		public IHapticFeedbackService _hapticFeedbackService;

		public IReadOnlyList<IPostTickBoardItemAnimationHandler> AnimationHandlers => null;

		public void PlayHapticFeedback(HapticFeedbackType preset)
		{
		}
	}
}
