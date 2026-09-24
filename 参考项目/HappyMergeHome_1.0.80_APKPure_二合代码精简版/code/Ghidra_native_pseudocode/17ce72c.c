
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_017de72c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  pcVar8 = (char *)(_UNK_017de944 + 0x17de748);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017de948 + 0x17de75c));
    func_0x01438628(*(undefined4 *)(_UNK_017de94c + 0x17de768));
    func_0x01438628(*(undefined4 *)(_UNK_017de950 + 0x17de774));
    func_0x01438628(*(undefined4 *)(_UNK_017de954 + 0x17de780));
    func_0x01438628(*(undefined4 *)(_UNK_017de958 + 0x17de78c));
    func_0x01438628(*(undefined4 *)(_UNK_017de95c + 0x17de798));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8fc0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8fc0,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_017de960 + 0x17de7f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017de964 + 0x17de814));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029b1058(iVar1,param_2,0);
  uVar5 = 1;
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar7 = 0;
    piVar10 = *(int **)(_UNK_017de968 + 0x17de864);
    puVar11 = *(undefined4 **)(_UNK_017de96c + 0x17de86c);
    puVar12 = *(undefined4 **)(_UNK_017de970 + 0x17de874);
    do {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar11);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar12);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = func_0x02be153c(iVar2,uVar9,0);
      iVar2 = func_0x014e9518(*puVar11);
      iVar3 = func_0x0152983c(iVar1,iVar7,*puVar12);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar9 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar4 = func_0x02be1348(iVar2,uVar9,0);
      uVar5 = uVar5 & uVar4;
    } while ((uVar5 == 1) && (iVar7 = iVar7 + 1, iVar7 < *(int *)(iVar1 + 0xc)));
  }
  return uVar5;
}

