
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b6243c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01b62618 + 0x1b62454);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b6261c + 0x1b62468));
    func_0x01438628(*(undefined4 *)(_UNK_01b62620 + 0x1b62474));
    func_0x01438628(*(undefined4 *)(_UNK_01b62624 + 0x1b62480));
    func_0x01438628(*(undefined4 *)(_UNK_01b62628 + 0x1b6248c));
    func_0x01438628(*(undefined4 *)(_UNK_01b6262c + 0x1b62498));
    func_0x01438628(*(undefined4 *)(_UNK_01b62630 + 0x1b624a4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2d18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2d18,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    uVar3 = func_0x024f56e0(&uStack_38,0,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_01b62634 + 0x1b62500) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b62638 + 0x1b6251c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = func_0x029a6fa8(iVar1,param_2,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01b6263c + 0x1b6255c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01b62640 + 0x1b62578));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar5 + 0x18);
    if ((iVar5 != 0) && (0 < *(int *)(iVar5 + 0xc))) {
      uVar3 = 0;
      puVar8 = *(undefined4 **)(_UNK_01b62644 + 0x1b625bc);
      iVar2 = func_0x0152983c(iVar5,0,*puVar8);
      if (iVar2 != 0) {
        iVar5 = func_0x0152983c(iVar5,0,*puVar8);
        iVar2 = *(int *)(iVar1 + 0x30);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar3 = 1;
        if (iVar2 != *(int *)(iVar5 + 0xc)) {
          uVar3 = (uint)(*(int *)(iVar1 + 0x30) == *(int *)(iVar5 + 0x10));
        }
      }
    }
  }
  return uVar3;
}

