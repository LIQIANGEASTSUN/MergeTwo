
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01cc2efc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puStack_34 = (undefined4 *)param_10;
  pcVar7 = (char *)(_UNK_01cc31c0 + 0x1cc2f24);
  puStack_38 = (undefined4 *)param_9;
  uStack_28 = param_12;
  uStack_30 = param_2;
  uStack_2c = param_3;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc31c4 + 0x1cc2f60));
    func_0x01438628(*(undefined4 *)(_UNK_01cc31c8 + 0x1cc2f6c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc31cc + 0x1cc2f78));
    func_0x01438628(*(undefined4 *)(_UNK_01cc31d0 + 0x1cc2f84));
    func_0x01438628(*(undefined4 *)(_UNK_01cc31d4 + 0x1cc2f90));
    func_0x01438628(*(undefined4 *)(_UNK_01cc31d8 + 0x1cc2f9c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafbc,0);
  uVar2 = uStack_28;
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xafbc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_40 = param_13;
    puStack_3c = (undefined1 *)0x0;
    uVar2 = func_0x028ba094(iVar1,param_1,uStack_30,uStack_2c,param_5,param_6,param_7,param_8,
                            puStack_38,puStack_34,param_11,uStack_28);
    return uVar2;
  }
  uStack_40 = param_13;
  puStack_3c = (undefined1 *)0x0;
  func_0x029f063c(param_1,uStack_30,uStack_2c);
  if (*(int *)(**(int **)(_UNK_01cc31dc + 0x1cc307c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc31e0 + 0x1cc3098));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020bb358(iVar1,uVar2,0);
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  func_0x01cc31f4(param_1);
  if (*(int *)(**(int **)(_UNK_01cc31e4 + 0x1cc30e4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc31e8 + 0x1cc3100));
  piVar6 = *(int **)(_UNK_01cc31ec + 0x1cc3114);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar6;
  }
  iVar8 = **(int **)(_UNK_01cc31f0 + 0x1cc3134);
  iVar4 = *(int *)(iVar8 + 0x1c);
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x230);
  if (iVar4 == 0) {
    func_0x014909d8(iVar8);
    iVar4 = *(int *)(iVar8 + 0x1c);
  }
  iVar3 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar3 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_029903f0 + 0x29901d4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar2,uVar9,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = func_0x02953fd4(0x226,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar3,uVar2,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar5 = 0;
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0475399c(iVar3,uVar2,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f2f10(iVar3,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar1 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f2f20(iVar3,200,0);
          if (iVar3 == 0) {
            return 0;
          }
        }
        puStack_34 = &uStack_28;
        puStack_38 = &uStack_30;
        puStack_3c = &stack0xffffffdc;
        uStack_40 = 0;
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar5,uVar2,uVar9);
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar1,uVar5,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar5 = 1;
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x226,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x02871898(iVar3,iVar1,uVar2,uVar9,0);
  }
  return uVar5;
}

