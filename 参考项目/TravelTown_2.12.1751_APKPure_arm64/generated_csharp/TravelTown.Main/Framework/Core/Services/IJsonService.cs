using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Serialization;
using strange.extensions.promise.api;

namespace Framework.Core.Services
{
	public interface IJsonService
	{
		JsonSerializerSettings JsonSettings { get; }

		JsonSerializer JsonSerializer { get; }

		bool DeserializeOnThreads { get; set; }

		string Serialize<T>(T objectForSerialization);

		string SerializeAsCamelCase<T>(T objectForSerialization);

		T Deserialize<T>(string serializedData);

		T Deserialize<T>(string data, IContractResolver resolver);

		T Convert<T>(JToken data);

		T Convert<T>(JObject data);

		object Deserialize(string data, Type type);

		IPromise<T> DeserializeThreaded<T>(string json, IContractResolver contractResolver = null);

		void AddJsonConverter(JsonConverter converter);

		T ToObject<T>(JObject data);

		T ToObject<T>(JToken data);
	}
}
