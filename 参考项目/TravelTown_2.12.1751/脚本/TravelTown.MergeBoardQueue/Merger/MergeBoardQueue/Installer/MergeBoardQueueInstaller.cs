using Merger.MergeBoardQueue.Views;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardQueue.Installer
{
	public class MergeBoardQueueInstaller : MonoInstaller<MergeBoardQueueInstaller>
	{
		[SerializeField]
		public MergeBoardQueueView _mergeBoardQueueView;

		[SerializeField]
		public DequeueAnimationView _dequeueAnimationView;

		public override void InstallBindings()
		{
		}
	}
}
