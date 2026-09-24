
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01cccd30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_01cccec8 + 0x1cccd44);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cccecc + 0x1cccd58));
    func_0x01438628(*(undefined4 *)(_UNK_01ccced0 + 0x1cccd64));
    func_0x01438628(*(undefined4 *)(_UNK_01ccced4 + 0x1cccd70));
    func_0x01438628(*(undefined4 *)(_UNK_01ccced8 + 0x1cccd7c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x926,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x926,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = (int)piStack_3c;
    uStack_20 = puStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uVar9 = func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4,0,0);
    return uVar9;
  }
  (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  FUN_01ccca64(param_1);
  if (*(int *)(**(int **)(_UNK_01cccedc + 0x1cccdf0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cccee0 + 0x1ccce0c));
  piVar6 = *(int **)(_UNK_01cccee4 + 0x1ccce20);
  iVar7 = *piVar6;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar6;
  }
  iVar8 = **(int **)(_UNK_01cccee8 + 0x1ccce40);
  iVar2 = *(int *)(iVar8 + 0x1c);
  uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x340);
  if (iVar2 == 0) {
    func_0x014909d8(iVar8);
    iVar2 = *(int *)(iVar8 + 0x1c);
  }
  iVar7 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x0149097c();
  }
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x0149097c();
  }
  uVar4 = **(undefined4 **)(iVar7 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
  iStack_24 = iVar1;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar7 = func_0x02953fd4(0x226,0);
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar1 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x04753c80(iVar7,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar3 = 0;
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar1 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x0475399c(iVar7,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar7 != 0) {
        iVar7 = *(int *)(iVar1 + 0x10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024f2f10(iVar7,0);
        if (iVar7 == 0) {
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f2f20(iVar1,200,0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        puStack_34 = &uStack_28;
        puStack_38 = &uStack_30;
        piStack_3c = &iStack_24;
        uStack_40 = 0;
        uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar3,uVar9,uVar4);
        iVar1 = *(int *)(iStack_24 + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar3 = 1;
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x226,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_48 = 0;
    uVar3 = func_0x02871898(iVar7,iVar1,uVar9,uVar4);
  }
  return uVar3;
}

