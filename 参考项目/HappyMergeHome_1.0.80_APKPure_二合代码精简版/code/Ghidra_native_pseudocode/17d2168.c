
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_017e2168(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_017e2418 + 0x17e2184);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e241c + 0x17e2198));
    func_0x01438628(*(undefined4 *)(_UNK_017e2420 + 0x17e21a4));
    func_0x01438628(*(undefined4 *)(_UNK_017e2424 + 0x17e21b0));
    func_0x01438628(*(undefined4 *)(_UNK_017e2428 + 0x17e21bc));
    func_0x01438628(*(undefined4 *)(_UNK_017e242c + 0x17e21c8));
    func_0x01438628(*(undefined4 *)(_UNK_017e2430 + 0x17e21d4));
    func_0x01438628(*(undefined4 *)(_UNK_017e2434 + 0x17e21e0));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar6 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8fd0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_017d5bc8(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_017e2438 + 0x17e2264) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017e243c + 0x17e2280));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar2,**(undefined4 **)(_UNK_017e2440 + 0x17e22c4));
        puVar7 = *(undefined4 **)(_UNK_017e2444 + 0x17e22d8);
        do {
          iVar2 = func_0x015109ec(&uStack_30,*puVar7);
          iVar1 = iStack_24;
          if (iVar2 == 0) {
            func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017e2448 + 0x17e2384));
            return 0;
          }
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar1 + 8) != param_2);
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017e2454 + 0x17e2310));
        iVar2 = FUN_017d48ec(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar2 + 0x74);
        uVar6 = 1;
        uVar4 = *(uint *)(iVar1 + 0xc);
        bVar8 = *(uint *)(iVar2 + 0x70) < uVar4;
        iVar2 = (int)uVar4 >> 0x1f;
        if ((int)(iVar3 - (iVar2 + (uint)bVar8)) < 0 !=
            (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar8))) {
          iVar2 = FUN_017d48ec(param_1);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = (uint)(*(int *)(iVar1 + 8) < *(int *)(iVar2 + 0x78));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8fd0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x02873a70(iVar1,param_1,param_2,0);
  }
  return uVar6;
}

