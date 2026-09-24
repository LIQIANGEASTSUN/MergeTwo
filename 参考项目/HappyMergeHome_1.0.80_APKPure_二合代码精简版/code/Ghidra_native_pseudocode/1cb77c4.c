
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cc77c4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_01cc7ae4 + 0x1cc77d8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc7ae8 + 0x1cc77ec));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7aec + 0x1cc77f8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7af0 + 0x1cc7804));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7af4 + 0x1cc7810));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7af8 + 0x1cc781c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7afc + 0x1cc7828));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7b00 + 0x1cc7834));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7b04 + 0x1cc7840));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1a93,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a93,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01cc7b08 + 0x1cc78b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x02c35d10(0x31,0);
    if (iVar1 != 0) {
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar1 + 0xc) != '\0') {
        iVar1 = FUN_01cc28c8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar1 + 0x50) == '\0') {
          if (*(int *)(**(int **)(_UNK_01cc7b0c + 0x1cc7930) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc7b10 + 0x1cc794c));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar11 = func_0x026ffbe0(iVar1,0);
          iVar7 = (int)((ulonglong)uVar11 >> 0x20);
          iVar1 = FUN_01cc28c8(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar1 + 0x2c);
          bVar10 = *(uint *)(iVar1 + 0x28) < (uint)uVar11;
          if ((int)(iVar3 - (iVar7 + (uint)bVar10)) < 0 !=
              (SBORROW4(iVar3,iVar7) != SBORROW4(iVar3 - iVar7,(uint)bVar10))) {
            iVar1 = FUN_01cc28c8(param_1);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x026a8354(iVar1,1,0);
            if (*(int *)(**(int **)(_UNK_01cc7b14 + 0x1cc79d0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01cc7b18 + 0x1cc79ec));
            piVar6 = *(int **)(_UNK_01cc7b1c + 0x1cc7a00);
            iVar7 = *piVar6;
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
              iVar7 = *piVar6;
            }
            iVar8 = **(int **)(_UNK_01cc7b20 + 0x1cc7a20);
            iVar3 = *(int *)(iVar8 + 0x1c);
            uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xb28);
            if (iVar3 == 0) {
              func_0x014909d8(iVar8);
              iVar3 = *(int *)(iVar8 + 0x1c);
            }
            iVar7 = *(int *)(iVar3 + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            if (*(int *)(iVar7 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
            if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
              iVar7 = func_0x0149097c();
            }
            uVar4 = **(undefined4 **)(iVar7 + 0x5c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x02b0c90c(iVar1,uVar9,uVar4,0);
            if (*(int *)(**(int **)(_UNK_01cc7b24 + 0x1cc7ab4) + 0x74) == 0) {
              func_0x014387a4();
            }
            uVar2 = func_0x024eec50(uVar9,0,0);
            return uVar2 ^ 1;
          }
        }
      }
    }
  }
  return 0;
}

