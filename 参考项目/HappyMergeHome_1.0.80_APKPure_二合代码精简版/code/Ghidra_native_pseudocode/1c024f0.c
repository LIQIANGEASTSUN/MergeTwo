
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c124f0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01c1288c + 0x1c12508);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c12890 + 0x1c1251c));
    func_0x01438628(*(undefined4 *)(_UNK_01c12894 + 0x1c12528));
    func_0x01438628(*(undefined4 *)(_UNK_01c12898 + 0x1c12534));
    func_0x01438628(*(undefined4 *)(_UNK_01c1289c + 0x1c12540));
    func_0x01438628(*(undefined4 *)(_UNK_01c128a0 + 0x1c1254c));
    func_0x01438628(*(undefined4 *)(_UNK_01c128a4 + 0x1c12558));
    func_0x01438628(*(undefined4 *)(_UNK_01c128a8 + 0x1c12564));
    func_0x01438628(*(undefined4 *)(_UNK_01c128ac + 0x1c12570));
    func_0x01438628(*(undefined4 *)(_UNK_01c128b0 + 0x1c1257c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0xaafa,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 != 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01c128b4 + 0x1c125fc) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = 0;
      iVar1 = func_0x02b63a9c(iVar1,0xce5,0,0);
      if (iVar1 != 0) {
        piVar8 = *(int **)(_UNK_01c128b8 + 0x1c1263c);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(_UNK_01c128bc + 0x1c12658);
        iVar1 = func_0x03b2c734(*puVar9);
        piVar7 = *(int **)(_UNK_01c128c0 + 0x1c1266c);
        iVar6 = *piVar7;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar5 = 0;
        iVar1 = func_0x02b76b98(iVar1,0,uVar3,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x03b2c734(*puVar9);
          iVar6 = *piVar7;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
            iVar6 = *piVar7;
          }
          uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 8);
          if (*(int *)(**(int **)(_UNK_01c128c4 + 0x1c126f8) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_01c128c4 + 0x1c126f8));
          }
          uStack_38 = func_0x02aed6d8(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          func_0x02b768cc(iVar1,0,uVar5);
          iVar1 = FUN_01c0e5e0(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0x58) < 2) {
            func_0x01c128d8(param_1,2);
          }
          iVar1 = FUN_01c0deb0(param_1);
          if (*(int *)(**(int **)(_UNK_01c128c8 + 0x1c127a0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01c128cc + 0x1c127bc));
          piVar8 = *(int **)(_UNK_01c128d0 + 0x1c127d0);
          iVar2 = *piVar8;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x014387a4();
            iVar2 = *piVar8;
          }
          if (iVar1 == 0) {
            uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc5c);
          }
          else {
            uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc60);
          }
          iVar2 = **(int **)(_UNK_01c128d4 + 0x1c127f8);
          iVar1 = *(int *)(iVar2 + 0x1c);
          if (iVar1 == 0) {
            func_0x014909d8(iVar2);
            iVar1 = *(int *)(iVar2 + 0x1c);
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          uVar3 = **(undefined4 **)(iVar1 + 0x5c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02b0c90c(iVar6,uVar5,uVar3,0);
          uVar5 = 1;
        }
      }
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0xaafa,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
  uVar5 = func_0x024f56e0(&uStack_30,0,0);
  return uVar5;
}

