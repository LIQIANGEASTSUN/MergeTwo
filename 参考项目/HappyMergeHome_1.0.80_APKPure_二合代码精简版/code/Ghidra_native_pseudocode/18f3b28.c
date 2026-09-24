
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01903b28(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_01903d64 + 0x1903b48);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01903d68 + 0x1903b5c));
    func_0x01438628(*(undefined4 *)(_UNK_01903d6c + 0x1903b68));
    func_0x01438628(*(undefined4 *)(_UNK_01903d70 + 0x1903b74));
    func_0x01438628(*(undefined4 *)(_UNK_01903d74 + 0x1903b80));
    func_0x01438628(*(undefined4 *)(_UNK_01903d78 + 0x1903b8c));
    *pcVar9 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar7 = func_0x02953fd4(0x96a3,0);
  if (iVar7 == 0) {
    iVar7 = FUN_018f9728(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x84);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(param_2 + 8);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024f1110(iVar7,uVar10,**(undefined4 **)(_UNK_01903d7c + 0x1903c34));
    if (iVar7 == 0) {
      iVar7 = FUN_018f9728(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x84);
      uVar10 = *(undefined4 *)(param_2 + 8);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar7,uVar10,1,**(undefined4 **)(_UNK_01903d80 + 0x1903c84));
    }
    uVar11 = *(undefined4 *)(param_2 + 0x10);
    uVar10 = *(undefined4 *)(param_2 + 0x14);
    if (*(int *)(**(int **)(_UNK_01903d84 + 0x1903ca0) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar8 = func_0x02af43a8(uVar11,uVar10,0);
    func_0x02028d38(&uStack_48,0xa1,0);
    uStack_44 = **(undefined4 **)(_UNK_01903d88 + 0x1903ce8);
    func_0x014385cc((uint)&uStack_48 | 4);
    uVar6 = uStack_2c;
    uVar5 = uStack_30;
    uVar4 = uStack_34;
    uVar3 = uStack_38;
    uVar2 = uStack_3c;
    uVar1 = uStack_40;
    uVar11 = uStack_44;
    uVar10 = uStack_48;
    iVar7 = **(int **)(**(int **)(_UNK_01903d8c + 0x1903d0c) + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02e66ffc(iVar7,uVar8,uVar10,uVar11,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,1,0);
  }
  else {
    iVar7 = func_0x029540a4(0x96a3,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar7,param_1,param_2,0);
  }
  return;
}

