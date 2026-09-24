
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01cd074c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar7 = (char *)(_UNK_01cd0970 + 0x1cd0764);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd0974 + 0x1cd0778));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0978 + 0x1cd0784));
    func_0x01438628(*(undefined4 *)(_UNK_01cd097c + 0x1cd0790));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0980 + 0x1cd079c));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0984 + 0x1cd07a8));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0988 + 0x1cd07b4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xaff1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xaff1,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,param_1,0);
    func_0x01523a2c(&puStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    iVar1 = func_0x024f56d0(iVar6,uVar9,&puStack_38,uVar4,0,0);
    return iVar1;
  }
  iVar1 = FUN_01ccc5a4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x54);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f0f34(iVar1,param_2,**(undefined4 **)(_UNK_01cd098c + 0x1cd083c));
  if (iVar1 == 0) {
    iVar1 = FUN_01ccc5a4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x54);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b75ba0(iVar1,param_2,**(undefined4 **)(_UNK_01cd0990 + 0x1cd0884));
    if (*(int *)(**(int **)(_UNK_01cd0994 + 0x1cd0898) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cd0998 + 0x1cd08b4));
    piVar5 = *(int **)(_UNK_01cd099c + 0x1cd08c8);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar5;
    }
    iVar8 = **(int **)(_UNK_01cd09a0 + 0x1cd08e8);
    iVar2 = *(int *)(iVar8 + 0x1c);
    uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x348);
    if (iVar2 == 0) {
      func_0x014909d8(iVar8);
      iVar2 = *(int *)(iVar8 + 0x1c);
    }
    iVar6 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x0149097c();
    }
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar6 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_029903f0 + 0x29901d4);
    aiStack_24[0] = iVar1;
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar7 = '\x01';
    }
    uStack_28 = 0;
    uStack_2c = 0;
    iVar6 = func_0x02953fd4(0x226,0);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar1 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04753c80(iVar6,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      iVar6 = 0;
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar1 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0475399c(iVar2,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar2 != 0) {
          iVar6 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f2f10(iVar6,0);
          if (iVar6 == 0) {
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
          piStack_3c = aiStack_24;
          uStack_40 = 0;
          uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar3,uVar9,uVar4);
          iVar1 = *(int *)(aiStack_24[0] + 0x18);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          iVar6 = 1;
        }
      }
    }
    else {
      iVar6 = func_0x029540a4(0x226,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      iVar6 = func_0x02871898(iVar6,iVar1,uVar9,uVar4);
    }
    return iVar6;
  }
  return iVar1;
}

