using Merger.MergeBoardSellItemCapability.Views;
using UnityEngine;
using Zenject;

namespace Merger.MergeBoardSellItemCapability.Installer
{
	public class MergeBoardSellItemInstaller : MonoInstaller<MergeBoardSellItemInstaller>
	{
		[SerializeField]
		public SellItemView _sellItemView;

		[SerializeField]
		public SellItemAnimationsView _sellItemAnimationsView;

		public override void InstallBindings()
		{
		}
	}
}
