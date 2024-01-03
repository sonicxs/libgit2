#ifdef GIT_EXPERIMENTAL_SHA256

static const char *packed_objects_256[] = {
	"99f3b405443221141eb0fd1e0cca5d355f893983749b7fb455769fba434e7945",
	"d0fc7f52dc42358506e7f3f3be72f5271994abb104b9397ab3e19bb42361504d",
	"86e228d9904af64586e9a8378005ba654681ff5be3c43ca930bf6b1f28d4395f",
	"652412419a24ba62a1d897f40aeb80eecbf873797b04a1bbb8d71918653ef65b",
	"ad90f638cb67720b20b904478471504acebacc7bb36e5dcad3e882acec496fed",
	"4d46d9719e425ef2dfb5bfba098d0b62e21b2b92d0731892eef70db0870e3744",
	"80ec1e36b983e68664e8357c538cd35b30638bb0cb99626f906d145e2d2e2558",
	"e8bbf40ee280bc43b33c04df2250903b75e92f2497e91759cf1cad753c23be6c",
	"8864b5746d7c5780083bb98449a3f5bf78d8281e8c5e3fd12a8ccd9103eb3a1f",
	"083c2b8b445640d171e7aa667b0b32007006f786711032ebb82931cca69cc15b",
	"5c8bea399f78d3d6a037a41cee2e763d00024180b66f2ec738d443b6a3dd7081",
	"281c36286eab5e534f1c2121a4cf2cd48a32b3773a3e78df500bed3f3c9747f3",
	"c9dc53358a0d83bee1caae40ee81d752abf4962a9f206702e24a447b766b5bd7",
	"fafc05a1d0b7614ba32f428eb52f3439ffbfed9a817e5ae069364cfc3fa3e4d4",
	"25a4efebb38c55b8f2309ce5e3116b2b9287239952cc2fa174074e05c6e5875a",
	"c223f1b579bad18635efdeffa7a8ff40567d03fa427e08bb90d9878f958d8021",
	"8a0042d434a2f8a2e8d47caa4eb454f388752fb3fe71150c1cea12e807cfdf1c",
	"d79e913b4137117b7f8fc2a8d184373f657d6f71bbeaca0fe83b7757ce486108",
	"375f69d3d41e36d6904bfa86221690ec49de2a030664a362abaf86c426f9f7e0",
	"22b6705b86e4aa9120eff203af24709d483698d9f78695e86e82de121784b570",
	"4516b0e63349c81abc6584cb11ce84ab8ba38b105f9de39d0d0a1455dba2478d",
	"c2b535bfc3501f0b4e179d5d6f0e2cea613940fa3813be5923db7e71e190849f",
	"aa793f0e9d9d746eba8a7a60cb4981f7e24ce9691910350d7df9b9e94c7567b9",
	"890bb959ac8c20db603bf083bc82f55f9f42b6dca6581d941d0b361188abae3b",
	"bfc0ee6fe04854c11011539f38cc6b9b73e0c445bac2008de2fb877123efc2e3",
	"5ba7253f47d390ee2c7c7afe8fd9a963a7a2674bbdadeb9a927665c9246306c4",
	"79bc735b91f8dfa9379d1d6c21e2d519ac1bf0d04d48534864c9ff571df5297d",
	"f362826c827aa3bcbeb3ff8b71bba08d7440b89ab53fe95d61b8922d01f46e28",
	"4a1b9c078e7bb20759a2d75e3a4b96827c851446c0261750b96aa5f286efe378",
	"2e2aa456dbbb8889923eb6713672427854020298a764967c50235a9a76d7ce4b",
	"97b0e3661fa0caa6200c50381233f8320b907540ceb9d17ac94fedc66fd093c2",
	"ade7d297ede7bb58008da582de1253f0a55cb76e82d1cd376f82ccf97f70bced",
	"3315093132a8f28bd202c0a9562d04eebea4943dcd1e1c754341b0389722042f",
	"6fae137ba81d0d81c2a85759b99322e7ea8103bd7c8b85be3163b7e91e18c125",
	"f8b45f792840019909fd35f9dcb98082b3bc39373268d467e1b00f1da5ac71e5",
	"d2ab425d6092770366bc3dff5276e3a869221bc7b6d22e99c089d556e7eb8331",
	"4dd37b9df07bcc7b45ce72a44e3f5fcaf5f0a9a5f3148963714eac4c99a60388",
	"8c53c0f9f0972a1c77e40549170b9ae51d365c200ffc4cb220628c5bce3dd0b2",
	"11d0463a82345c2512bd704dd00211aefb7d5b8590ca92809122fd09486a9f06",
	"1ab4fa663d22416f45cb1a007d767a58d0abf5255bf86f888393dae637b37c3b",
	"345d2fbf1d306c7ea46a05f497793308357e9e17ab0e866446d2b9894378ddce",
	"304352ddad641770fcc94ee4d9f957cde7aaf4c107dbf8b5ba14d543640bf7dd",
	"cfdd565f4cbc315760c287d57714852e1a4894eef9c715332fd556f2e114a9f1",
	"d6d2e87e6de8690efd26b8c5b58de28dcb3c9bd2b7659eccf34468d71a7a4478",
	"aa61d4adf622265ec814c1a97198d2bcd3f58fb08989cb9beda32a4d0aab6697",
	"40799f33b8cd9ca41f36a2f89d8ac8550537ad01dfb21fbc76f01eeb62f512d4",
	"faa7ca59426e17f6b34fa407d06cd634faaabeb4abe26df12296e05a17c98eef",
	"1f6ea2cab887a2ff4bb1557a36dd6bac9931ef1f36794ddd22b4b7b7276051fb",
	"b38a7a2ee69d55f021efa91caf59e23bccdaf6b8a9c3f83acd978aa177587537",
	"f66691f32eb9b23a029b43251bfa994d16481fe97903057e121b76e4e78f6ff4",
	"afe1fad6f6b22eea530ff7b373d6b9b787b39792f720e6fcd0692ba6ef99e02f",
	"b71ee6c8837efa5b3ba3361f88c321d391ac05f41d5b2506cad39319e80716e4",
	"e207a266e228414023223530eb77c64b10f2f5124f3354deb45aff04c1db98b9",
	"696503760a18787240ba52ad1abec3be6517bb802238e9469b3a8999cbd6432c",
	"c30d06fd49797e3135652d654db0de122dd83f8400df1c7a0e95ca3720defb0d",
	"8a9b600a21987e6ffddbad745f38c115797eacef9117043bd9d2da4835ee3cc4",
	"d509fa76ff5944e25f48c2476736b6239a53f0463cba6ebc488464d087951951",
	"3e00d8cae2726dc33879adf876b30c306f50e7a85b15c8add4a27f84d88616d7",
	"ce55f9f5ab1d799a9ffaa839539af196d13f35677b3d0761b0fe034e764f8d07",
	"84005e38a65f4115d5c94790010dc57e1a3297f4aa89744f5927f208af758bd0",
	"75b0ed5f4a2d5c810f34d867dbca51db6a596d4739abfaf24fcc0f05d99097a8",
	"3eab74a6894d790767f3d92615a6887dcccaffa9e48fdd2ce482b5f17efcf9b9",
	"8e61988c998c96a131cfe72225fce43e555bec4e590fa8c239373172a9d485ce",
	"5f45a18f90f2934e7c7985d05b2b5b3584886fd057c9202f26f562d6c3080038",
	"7609c608c1097270356a6fe336a8756ff124d4a9c2e941bba26a6e8c3becdeb1",
	"81ba4e67aa59ccb078e3dc9ff3075f50084ec1696bd867e8e4284fcfc34fe3cf",
	"3b1b991ae70d1f5388ad16b63d2285e99ada7a618c6f5d01e50a6d4b33c4767d",
	"ac49410f64fad10760838866a40107573e42c86908c83ece433d64b7a8b57f7f",
	"72c472319cf7d5d59bf9fea9e90b9785d7ab39340003fbc68619c11a9e583c2f",
	"3a0cd33a47fcd0c7b8f8c1d407aaa53f648e25f2ffe2533a7e9c09c3d1b9da75",
	"bf409f1aa76256282ebf1a7cc6c9f4220be9ffc47b2cc42248fcc5cbb67bce1f",
	"13c8c9dae9fa63b1ec48b8abb12312fc8df61b9414678f504fa68164a48eef28",
	"078baf54914fab56842798c90fec863f15f67a22041e8aa54a88c43f059da050",
	"41c166c241a4e878f444932a193501e12ab38ba0634747291df70e619dccee1c",
	"9db520a5a88c7d75b86a4faa1ce9010edf38af922f400c69a4a93aef69e25c4c",
	"edf6e0dbfaf8a7ad89b05b5768981eeedd7a2bda4b1d0fae07aa2a9d49bb39df",
	"ec1866b39026366e69ab8e167c15312c27f5eda4c0afdf9367ac3d76f56bf8e7",
	"695bdb545f636d454b4825effd29db96c46d81772dda6c104f97dffe2ec509f1",
	"07c31b4be5f3ec8f82c7ad6c91cbdf07ae876bb73041903d64fe8bac64bbcb6e",
	"06665948a581e547ac1dc883b35bab54682fc311f7a87d5563a76501ecba55fc",
	"fa6a2b7e588e57115d2772c0d5250d886757404fc510a5956be8de4926e94c01",
	"28aec9a4450d9de98db98a021f97026bf12f1328f66e53319669eb5adce5ed3e",
	"290d84a2cf108c074d3764ca8dc56e1215a5a7482837f098dff7a55e23d89d5f",
	"ed10f9520d5f0d6bbd9c467ed83a239df0cba94ae9031602e02f6ad6256c459e",
	"ad05c66a177f844f8239a1d186a1f803a4daa6286c959538838e222bc6337dc9",
	"88fecc715077807bd7ee9e6a1dff65fde000379e0bf2a15cc2404469cef4c82b",
	"bcc4fa242e55c5e08f64900407dca1cf2451806830905be616f339bf7a5580aa",
	"4a4ebb837e3c9883f35d0ecdc26d4bc76a0f665568b08f3e967096f2fd3fa537",
	"9abb7801e72353060a1490ffa3331674d6882558e7d6458de397b4b00d31ff8c",
	"466cdfec4c74f3ed4fe53165e468a52df5dff9c6533ec433cdf235a73e099d32",
	"8a1e1a6cc00519c4df8ce404c987751446fa299662308622cb63576fb52996d7",
	"e5ea38108d603a6ed8dbb0b8455abe6d971f2d60920207e67ba646d267ece305",
	"97e00ba4c8028ea91e7131c8c7596227cd03d3d2d14ed2d179fe0f305ebbca39",
	"807faa3586b7f1aff2797a7c39c135b0196647c9ae7ee8843322accc960b2f22",
	"b9134c331629e9cb29d1bbc03904d911a942b451e087543fc16deb0116391297",
	"23cb97c200205dc84109c248be5bd719c23bdab52b52c51ec92fef9a48790833",
	"b6e8427e3afe1cf0095d0f5aeca0642c4fb12d4e529f62e8264b6c4db72f04b4",
	"92128dfb792caea934f5218807ec993867b0c8487a3de69ebac33e067f64d38a",
	"a13ecbc514b571721a9a1c92af7f89d473a5fe13228904f8d17368e71f273ea1",
	"3f5dca26a2f512d6681ce1957b8afba5e031bf63d52fd52d8f57093bf92391a4",
	"1aa24b7ebd910f39a676f2ccab8e9a79f14842c20b55ed18e3dc297bdbaca279",
	"1e0ce38d00e8f3e613febc0f8b275e0fd7fbef8af293fd62698be46dfbbc937d",
	"dd9b1d5ca653752cef167e034324198971ab6f2f38f3db9db571cb2985759f00",
	"efc4b8fd4b0b2586fce256b107ee2a052d11d26f99d85ce0478c3d49d1b2186b",
	"da38f65b32fb03ce332e0c4238edae0a733e4cd793d849522bb4e0bdd0af608c",
	"bf66badfda7b5d2157db65c5310cfdc4e904d7d5da57ac5abe17542de612f856",
	"2c0f52f9ae1f34f280dfc1c755cbfaf2b9968fd3bab1f1eb16d3ac0fafd71940",
	"165ec90aa4190bbe12ee415b294fd6d204c64afcf1ca64dd815782872b24ea26",
	"cc3d272d457c7e26c5d611923841511a1766bcd58e5be66433698627e6fb3f9d",
	"d970d1a6296d149bfb8283b8b4a9a6f7e9ee320c5d46a5ef216e10400df2d281",
	"bdc530e0b98dd736cd812408eeed9aa0d393bbd0630b355eb7601e61f0dbc7c4",
	"94db24aca3f8e07f481744f62633730feb4fc47605280381a08be510ae971ffe",
	"151c7527acc5b731199a03a932ae374331e16e5ae29256e98cb652f37669889b",
	"ac88849a26c126b03fc6fcb17cb23ec563e87a5f63b7afe800ad0f436128ce98",
	"26a2dac21f8f0939566570e48f7f4fcf89239c2746ef8d3dbf31d179c691808f",
	"619f24a7f37f8ca922c83b3a1b9a384eb6a444ff3a2a52c712f3c60dde6f24fb",
	"5329dd2fd8557be5ad06b57882cf42e23d767cdc8a4b25e464fdb00890649e07",
	"fff5cbc10ffea865d69aba64082ae17479c522e8e0305e678469749282bf0a18",
	"d0c992aae9cde855b17ac826234a73255ecb09534cdcfa633d90640f6a4324d9",
	"6129f1672465ee7b9e2edef53fbf3846ab5d06e8e6a1d7fb51e31666a8b411f8",
	"0a8c0add81b065b97451f7b47a9935f0e240251c5f90a89ced885cb7d4efc2ba",
	"471fa4fc2da467dd94e57babb1912bbdb5e40b96c8129d46fc709c0bfc009bca",
	"23cea2b49eed4993c5b92a9d5f0b82efe4fae3837ea707d921de645d04479015",
	"c85e35eec23dea4089aee7a2dc7f6d937ad7e13c66bdbd7eef37bd6336418609",
	"a0f3dac8fa0e22dcf356aecbbdf79440715687c1053bc59b83354f276d688ceb",
	"1cfb8ae71e9e576d1b16b7bd1a62156d0641c6e51f5d76877be6de4f26410623"
};

static const char *loose_objects_256[] = {
	"96c18f0297e38d01f4b2dacddea4259aea6b2961eb0822bd2c0c3f6029030045",
	"aea29dc305d40e362df25c3fdeed5502fd56b182af01b7740d297a24459333c5",
	"73b4f3c4f3182e6c8dd2c98aeb2c7811556538e7673e4b325307c71685fbf5b6",
	"901505c3355518bee35475c5d3f23bac1dded688b2bd314cc32b7f157e100724",
	"4bc142808884e472ee6cc331b132e66ef18f564d41efb055804ec1dd28efb3f5",
	"7e4633ae1b0e83503dbea4417f9d5ccaf22b877c5a4522b6d1d2b16090ee2f6f",
	"473a0f4c3be8a93681a267e3b1e9a7dcda1185436fe141f7749120a303721813",
	"7030f925768d9beb65654ab8f436e3ca0a82b25eddefd237bf5a26a0441c2aa7",
	"cb282e7c15fd8aeb2265cd621f5a228cb33dc84192980ca426cf9ab2a48cb9f0",
	"33e415b835a670bb5c3c760efa0433ac0cbd2d44679f68f2df3a9ae7014cf2a8",
	"8155958bbda08eed88c8ac908dc44452ed38911cffa54ccc06076f30a1ffb1bf",
	"1b4b74772bd83ff28bf44cda9be93f4afc2279623bb5b36c9194a660b7623c24",
	"f31459efb9367c5a19c9dd24c75107423d5773066922ea5e55eaeb6490979562",
	"6d5fd291bb0f67444e99ab492f1bf1fcdf5dca09dab24cf331e05111b4cfc1a3",
	"b83624f6ac0995273c0034a7ab8c68929bdc91b69ad54ef94979b93eba3f6022",
	"61489e9e831f1d9001084d39b79f964c293db8620d679ea3596673c8a326446e",
	"abee32b3339d1566d75613ea61f40c14bdfc5b101b60fde4f44b58dd06667640",
	"a4813ef6708e6011e8187224297e83e4a285f58bf5eabb1db270351388603c95",
	"43e084a4599ca42c476919917e3db8fde0045ee66305fd5e634b0c793c536a1b"
};

#endif
