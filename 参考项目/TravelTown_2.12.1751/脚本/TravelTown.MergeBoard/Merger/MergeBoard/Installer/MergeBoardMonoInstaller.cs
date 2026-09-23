using Merger.MergeBoard.View;
using Merger.MergeBoard.View.Animations;
using Merger.MergeBoard.View.Layout;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoard.Installer
{
	public class MergeBoardMonoInstaller : MonoInstaller<MergeBoardMonoInstaller>
	{
		[SerializeField]
		public MergeBoardView _mergeBoardView;

		[SerializeField]
		public MergeBoardLayout _boardLayout;

		[SerializeField]
		public MergeBoardParticlesView _particlesView;

		[SerializeField]
		public ImmediateToolsGrantView _immediateToolsGrantView;

		public override void InstallBindings()
		{
		}
	}
}
