
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b1a60(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_032b1c58 + 0x32b1a7c);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b1c5c + 0x32b1a90));
    func_0x01438628(*(undefined4 *)(_UNK_032b1c60 + 0x32b1a9c));
    func_0x01438628(*(undefined4 *)(_UNK_032b1c64 + 0x32b1aa8));
    *pcVar10 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar7 = func_0x02953fd4(0x829f,0);
  if (iVar7 == 0) {
    iVar7 = FUN_032b1868(param_1);
    if (iVar7 != 0) {
      iVar7 = FUN_032a7be8(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x026eef10(iVar7,1,0);
      iVar7 = FUN_032a8694(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar11 = *(undefined4 *)(iVar7 + 0x14);
      iVar7 = FUN_032a8694(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar7 + 0x18);
      if (*(int *)(**(int **)(_UNK_032b1c68 + 0x32b1b84) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar8 = func_0x02af43a8(uVar11,uVar9,0);
      func_0x02028d38(&uStack_48,0x94,0);
      uStack_44 = **(undefined4 **)(_UNK_032b1c6c + 0x32b1bc8);
      func_0x014385cc((uint)&uStack_48 | 4);
      uVar6 = uStack_2c;
      uVar5 = uStack_30;
      uVar4 = uStack_34;
      uVar3 = uStack_38;
      uVar2 = uStack_3c;
      uVar1 = uStack_40;
      uVar9 = uStack_44;
      uVar11 = uStack_48;
      iVar7 = **(int **)(**(int **)(_UNK_032b1c70 + 0x32b1bf4) + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02e66ffc(iVar7,uVar8,uVar11,uVar9,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,1,0);
    }
  }
  else {
    iVar7 = func_0x029540a4(0x829f,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar7,param_1,0);
  }
  return;
}

