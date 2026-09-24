
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f1178(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar3 = (char *)(_UNK_019f134c + 0x19f1198);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f1350 + 0x19f11b0));
    func_0x01438628(*(undefined4 *)(_UNK_019f1354 + 0x19f11bc));
    func_0x01438628(*(undefined4 *)(_UNK_019f1358 + 0x19f11c8));
    func_0x01438628(*(undefined4 *)(_UNK_019f135c + 0x19f11d4));
    func_0x01438628(*(undefined4 *)(_UNK_019f1360 + 0x19f11e0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3783,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019f1364 + 0x19f124c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f1368 + 0x19f1268));
    piVar6 = *(int **)(_UNK_019f136c + 0x19f127c);
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar6;
    }
    iVar4 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
    if (iVar4 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar6;
      }
      uVar5 = **(undefined4 **)(iVar2 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_019f1370 + 0x19f12c4));
      func_0x0152e3ec(iVar4,uVar5,**(undefined4 **)(_UNK_019f1374 + 0x19f12e4),0);
      piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x10);
      *piVar6 = iVar4;
      func_0x014385cc(piVar6,iVar4);
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b79ad8(iVar1,0x388,param_2,param_3,param_4,0x3f800000,0,0x3e99999a,iVar4,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3783,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871c20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

