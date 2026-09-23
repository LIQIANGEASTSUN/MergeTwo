// Spawn_GetItemFromQueue RVA 0x6A4E9D8
// 06b4e9d8


long target_Spawn_GetItemFromQueue(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000007e2a5ac & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077e75c0);
    func_0x03280a18(PTR_DAT_0782ff40);
    bRam0000000007e2a5ac = 1;
  }
  if (param_1 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x06faa078(*(undefined8 *)PTR_DAT_0782ff40,0);
  }
  else {
    uVar1 = func_0x03280afc(*(undefined8 *)PTR_DAT_077e75c0,0);
    lVar2 = func_0x060e9bf4(param_1,uVar1,*(undefined8 *)(param_2 + 0x10),param_3,0);
    if (lVar2 != 0) {
      plVar3 = *(long **)(lVar2 + 0x10);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      if (lVar4 == 0) {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}

