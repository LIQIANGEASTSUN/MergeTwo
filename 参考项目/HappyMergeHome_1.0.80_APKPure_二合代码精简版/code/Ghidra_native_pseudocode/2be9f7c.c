
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bf9f7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar6 = (char *)(_UNK_02bfa258 + 0x2bf9f9c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bfa25c + 0x2bf9fb0));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa260 + 0x2bf9fbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa264 + 0x2bf9fc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa268 + 0x2bf9fd4));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa26c + 0x2bf9fe0));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa270 + 0x2bf9fec));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa274 + 0x2bf9ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02bfa278 + 0x2bfa004));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e8e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02bfa27c + 0x2bfa068) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar5 = *(undefined4 **)(_UNK_02bfa280 + 0x2bfa084);
    iVar1 = func_0x014e9518(*puVar5);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02bad204(iVar1,param_2,uVar7,0);
    iVar1 = func_0x014e9518(*puVar5);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = FUN_02bad204(iVar1,param_3,uVar7,0);
    if (*(int *)(**(int **)(_UNK_02bfa284 + 0x2bfa0f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfa288 + 0x2bfa110));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x029a6fa8(iVar1,uVar7,0);
    iVar1 = 0;
    if (iVar4 != 0) {
      if (*(int *)(**(int **)(_UNK_02bfa28c + 0x2bfa160) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfa290 + 0x2bfa17c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02c4baac(iVar1,iVar4,0);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        if (*(int *)(iVar4 + 0xf8) != 0) {
          if (*(int *)(**(int **)(_UNK_02bfa294 + 0x2bfa1c4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bfa298 + 0x2bfa1e0));
          uVar7 = *(undefined4 *)(iVar4 + 0xf8);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x02d0fedc(iVar1,uVar7,0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*(int *)(iVar4 + 0x1c) != 99) {
          iVar2 = *(int *)(iVar2 + 0x3c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar3 + 0x3c) + iVar2;
          if (0 < iVar2) {
            iVar1 = iVar2;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e8e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028812d4(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

