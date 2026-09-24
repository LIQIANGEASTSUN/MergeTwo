
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01bc6560(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01bc6afc + 0x1bc6574);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b00 + 0x1bc6588));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b04 + 0x1bc6594));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b08 + 0x1bc65a0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b0c + 0x1bc65ac));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b10 + 0x1bc65b8));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b14 + 0x1bc65c4));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b18 + 0x1bc65d0));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b1c + 0x1bc65dc));
    func_0x01438628(*(undefined4 *)(_UNK_01bc6b20 + 0x1bc65e8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1b0d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1b0d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
      uVar6 = 0;
      if (*(int *)(iVar2 + 0x10) != 0) {
        uVar6 = 1;
      }
    }
    iVar10 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar10,uVar8,&uStack_30,uVar6,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_01bc6b24 + 0x1bc6640) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar6 = 0;
  iVar2 = func_0x02c35d10(0x49,0);
  if (iVar2 != 0) {
    piVar11 = *(int **)(_UNK_01bc6b28 + 0x1bc6674);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    piVar3 = (int *)FUN_01bc01cc();
    if (piVar3 == (int *)0x0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar2 = (**(code **)(*piVar3 + 0x110))(piVar3,0,*(undefined4 *)(*piVar3 + 0x114));
    if (iVar2 != 0) {
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_01bc01cc();
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_01bc2f34(iVar2);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar2 + 0x30) == '\0') {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = FUN_01bc01cc();
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_01bc1050(iVar2);
        piVar3 = *(int **)(_UNK_01bc6b2c + 0x1bc6748);
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar12 = *(undefined4 **)(_UNK_01bc6b30 + 0x1bc6764);
        iVar10 = func_0x03b2c734(*puVar12);
        iVar4 = *piVar11;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
          iVar4 = *piVar11;
        }
        if (iVar2 == 0) {
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02b76b98(iVar10,0,uVar6,0);
          if (iVar2 != 0) {
            return 0;
          }
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = FUN_01bc01cc();
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = FUN_01bc2f34(iVar2);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          cVar1 = *(char *)(iVar2 + 0x10);
          if (*(int *)(**(int **)(_UNK_01bc6b48 + 0x1bc696c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01bc6b4c + 0x1bc698c));
          piVar7 = *(int **)(_UNK_01bc6b50 + 0x1bc69a0);
          iVar10 = *piVar7;
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x014387a4();
            iVar10 = *piVar7;
          }
          if (cVar1 == '\0') {
            uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0xd08);
          }
          else {
            uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0xcfc);
          }
          iVar4 = **(int **)(_UNK_01bc6b54 + 0x1bc69c8);
          iVar10 = *(int *)(iVar4 + 0x1c);
          if (iVar10 == 0) {
            func_0x014909d8(iVar4);
            iVar10 = *(int *)(iVar4 + 0x1c);
          }
          iVar10 = *(int *)(iVar10 + 8);
          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
            iVar10 = func_0x0149097c();
          }
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
            iVar10 = func_0x0149097c();
          }
          uVar8 = **(undefined4 **)(iVar10 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x02b0c90c(iVar2,uVar6,uVar8,0);
          if (*(int *)(*piVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x03b2c734(*puVar12);
          iVar10 = *piVar11;
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x014387a4();
            iVar10 = *piVar11;
          }
          iVar4 = **(int **)(_UNK_01bc6b58 + 0x1bc6a90);
          uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 8);
        }
        else {
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xc);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02b76b98(iVar10,0,uVar6,0);
          if (iVar2 != 0) {
            return 0;
          }
          if (*(int *)(**(int **)(_UNK_01bc6b34 + 0x1bc67cc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01bc6b38 + 0x1bc67e8));
          piVar7 = *(int **)(_UNK_01bc6b3c + 0x1bc67fc);
          iVar10 = *piVar7;
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x014387a4();
            iVar10 = *piVar7;
          }
          iVar9 = **(int **)(_UNK_01bc6b40 + 0x1bc681c);
          iVar4 = *(int *)(iVar9 + 0x1c);
          uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0xd08);
          if (iVar4 == 0) {
            func_0x014909d8(iVar9);
            iVar4 = *(int *)(iVar9 + 0x1c);
          }
          iVar10 = *(int *)(iVar4 + 8);
          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
            iVar10 = func_0x0149097c();
          }
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
          if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
            iVar10 = func_0x0149097c();
          }
          uVar8 = **(undefined4 **)(iVar10 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x02b0c90c(iVar2,uVar6,uVar8,0);
          if (*(int *)(*piVar3 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x03b2c734(*puVar12);
          iVar10 = *piVar11;
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x014387a4();
            iVar10 = *piVar11;
          }
          iVar4 = **(int **)(_UNK_01bc6b44 + 0x1bc68e4);
          uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0xc);
        }
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4(iVar4);
        }
        uStack_38 = func_0x02aed6d8(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        func_0x02b768cc(iVar2,0,uVar6);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

