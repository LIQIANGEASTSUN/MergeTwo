using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Merger.Boosters.Data;

namespace Merger.Boosters.Declarations.Definitions.Interfaces.Models
{
	public interface IBoosterDataModel<TData> where TData : BoosterDataBase
	{
		BindableProperty<int> BoostersCount { get; }

		bool HasActiveBooster { get; }

		IReadOnlyCollection<TData> Boosters { get; }

		event Action Updated;

		bool TryGetBooster(string uuid, out TData booster);

		bool TryGetActiveBooster(out TData activeBooster);

		void AddBoosterData(TData data);

		void RemoveBooster(string uuid);

		void NotifyAboutChanges();
	}
}
