
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017de518(undefined4 param_1)

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
  
  pcVar10 = (char *)(_UNK_017de710 + 0x17de534);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017de714 + 0x17de548));
    func_0x01438628(*(undefined4 *)(_UNK_017de718 + 0x17de554));
    func_0x01438628(*(undefined4 *)(_UNK_017de71c + 0x17de560));
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
  iVar7 = func_0x02953fd4(0x8fc1,0);
  if (iVar7 == 0) {
    iVar7 = FUN_017de320(param_1);
    if (iVar7 != 0) {
      iVar7 = FUN_017d48ec(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x026edacc(iVar7,1,0);
      iVar7 = FUN_017d5398(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar11 = *(undefined4 *)(iVar7 + 0x14);
      iVar7 = FUN_017d5398(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar7 + 0x18);
      if (*(int *)(**(int **)(_UNK_017de720 + 0x17de63c) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar8 = func_0x02af43a8(uVar11,uVar9,0);
      func_0x02028d38(&uStack_48,0x82,0);
      uStack_44 = **(undefined4 **)(_UNK_017de724 + 0x17de680);
      func_0x014385cc((uint)&uStack_48 | 4);
      uVar6 = uStack_2c;
      uVar5 = uStack_30;
      uVar4 = uStack_34;
      uVar3 = uStack_38;
      uVar2 = uStack_3c;
      uVar1 = uStack_40;
      uVar9 = uStack_44;
      uVar11 = uStack_48;
      iVar7 = **(int **)(**(int **)(_UNK_017de728 + 0x17de6ac) + 0x5c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x02e66ffc(iVar7,uVar8,uVar11,uVar9,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,1,0);
    }
  }
  else {
    iVar7 = func_0x029540a4(0x8fc1,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar7,param_1,0);
  }
  return;
}

