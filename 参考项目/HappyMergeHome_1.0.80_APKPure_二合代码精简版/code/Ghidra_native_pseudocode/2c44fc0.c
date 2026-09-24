
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c54fc0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [4];
  
  pcVar8 = (char *)(_UNK_02c551c0 + 0x2c54fd8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c551c4 + 0x2c54fec));
    func_0x01438628(*(undefined4 *)(_UNK_02c551c8 + 0x2c54ff8));
    func_0x01438628(*(undefined4 *)(_UNK_02c551cc + 0x2c55004));
    func_0x01438628(*(undefined4 *)(_UNK_02c551d0 + 0x2c55010));
    func_0x01438628(*(undefined4 *)(_UNK_02c551d4 + 0x2c5501c));
    func_0x01438628(*(undefined4 *)(_UNK_02c551d8 + 0x2c55028));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5f46,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5f46,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,param_2,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,param_1,0);
    func_0x01523a6c(&puStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    uVar7 = func_0x024f56d0(iVar5,uVar7,&puStack_38,uVar4,0,0);
    return uVar7;
  }
  if (param_2 != 0) {
    if (*(int *)(**(int **)(_UNK_02c551dc + 0x2c5508c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c551e0 + 0x2c550a8));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = FUN_02be0a54(iVar2,0,0);
    *(undefined4 *)(param_1 + 0xcc) = uVar7;
  }
  FUN_02c53c40(param_1,1);
  if (*(int *)(**(int **)(_UNK_02c551e4 + 0x2c550e8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c551e8 + 0x2c55104));
  piVar6 = *(int **)(_UNK_02c551ec + 0x2c55118);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  iVar9 = **(int **)(_UNK_02c551f0 + 0x2c55138);
  iVar3 = *(int *)(iVar9 + 0x1c);
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 8);
  if (iVar3 == 0) {
    func_0x014909d8(iVar9);
    iVar3 = *(int *)(iVar9 + 0x1c);
  }
  iVar5 = *(int *)(iVar3 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  uVar4 = **(undefined4 **)(iVar5 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_029903f0 + 0x29901d4);
  aiStack_24[0] = iVar2;
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar7,uVar4,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar8 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar5 = func_0x02953fd4(0x226,0);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar2 + 0x14);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x04753c80(iVar5,uVar7,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar1 = 0;
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar2 + 0x14);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x0475399c(iVar5,uVar7,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar2 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f2f10(iVar5,0);
        if (iVar5 == 0) {
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f2f20(iVar2,200,0);
          if (iVar2 == 0) {
            return 0;
          }
        }
        puStack_34 = &uStack_28;
        puStack_38 = &uStack_30;
        piStack_3c = aiStack_24;
        uStack_40 = 0;
        uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar1,uVar7,uVar4);
        iVar2 = *(int *)(aiStack_24[0] + 0x18);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar2,uVar1,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar1 = 1;
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x226,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_48 = 0;
    uVar1 = func_0x02871898(iVar5,iVar2,uVar7,uVar4);
  }
  return uVar1;
}

