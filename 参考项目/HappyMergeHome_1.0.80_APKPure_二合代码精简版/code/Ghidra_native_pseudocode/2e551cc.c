
/* WARNING: Removing unreachable block (ram,0x02e654ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02e651cc(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
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
  
  pcVar8 = (char *)(_UNK_02e655dc + 0x2e651e8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e655e0 + 0x2e651fc));
    func_0x01438628(*(undefined4 *)(_UNK_02e655e4 + 0x2e65208));
    func_0x01438628(*(undefined4 *)(_UNK_02e655e8 + 0x2e65214));
    func_0x01438628(*(undefined4 *)(_UNK_02e655ec + 0x2e65220));
    func_0x01438628(*(undefined4 *)(_UNK_02e655f0 + 0x2e6522c));
    func_0x01438628(*(undefined4 *)(_UNK_02e655f4 + 0x2e65238));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3a4,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6,0,0);
    iVar1 = func_0x024f56e0(&uStack_38,0,0);
    return iVar1;
  }
  uVar10 = **(undefined4 **)(_UNK_02e655fc + 0x2e652a4);
  if (*(int *)(**(int **)(_UNK_02e655f8 + 0x2e65298) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar10 = func_0x024ef3e8(uVar10,0);
  if (*(int *)(**(int **)(_UNK_02e65600 + 0x2e652d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024f25e0(uVar10,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  piVar2 = (int *)func_0x024f2ff0(iVar1,0);
  piVar12 = *(int **)(_UNK_02e65604 + 0x2e65318);
  piVar13 = *(int **)(_UNK_02e65608 + 0x2e65320);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x014388e4();
    }
    iVar1 = *piVar2;
    iVar9 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_02e65378;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x01490a68(piVar2,iVar9,0);
LAB_02e65378:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      iVar1 = 0;
      break;
    }
    if (piVar2 == (int *)0x0) {
      func_0x014388e4();
    }
    iVar9 = *piVar2;
    iVar4 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar9 + *piVar7 * 8 + 200);
          goto LAB_02e653f0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x01490a68(piVar2,iVar4,1);
LAB_02e653f0:
    piVar7 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar9 = *piVar13;
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if (*(int *)(*piVar7 + 0x20) == *(int *)(iVar9 + 0x20)) {
      piVar11 = (int *)func_0x014387b0(piVar7);
    }
    else {
      piVar11 = (int *)0x0;
      func_0x01438ca8(piVar7,iVar9);
    }
  } while (*piVar11 != param_2);
  piVar12 = *(int **)(_UNK_02e6560c + 0x2e65474);
  piVar2 = (int *)func_0x014387a8(piVar2,*piVar12);
  if (piVar2 != (int *)0x0) {
    iVar9 = *piVar2;
    iVar4 = *piVar12;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar12[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0xc0);
          goto LAB_02e654d4;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x01490a68(piVar2,iVar4,0);
LAB_02e654d4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}

