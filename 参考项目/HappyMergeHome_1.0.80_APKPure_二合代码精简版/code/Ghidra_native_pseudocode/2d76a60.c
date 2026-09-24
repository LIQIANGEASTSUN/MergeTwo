
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02d86a60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02d86ee0 + 0x2d86a7c);
  iStack_24 = param_1;
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02d86ee4 + 0x2d86a90));
    func_0x01438628(*(undefined4 *)(_UNK_02d86ee8 + 0x2d86a9c));
    func_0x01438628(*(undefined4 *)(_UNK_02d86eec + 0x2d86aa8));
    func_0x01438628(*(undefined4 *)(_UNK_02d86ef0 + 0x2d86ab4));
    func_0x01438628(*(undefined4 *)(_UNK_02d86ef4 + 0x2d86ac0));
    func_0x01438628(*(undefined4 *)(_UNK_02d86ef8 + 0x2d86acc));
    func_0x01438628(*(undefined4 *)(_UNK_02d86efc + 0x2d86ad8));
    func_0x01438628(*(undefined4 *)(_UNK_02d86f00 + 0x2d86ae4));
    func_0x01438628(*(undefined4 *)(_UNK_02d86f04 + 0x2d86af0));
    func_0x01438628(*(undefined4 *)(_UNK_02d86f08 + 0x2d86afc));
    func_0x01438628(*(undefined4 *)(_UNK_02d86f0c + 0x2d86b08));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x74b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02d86f10 + 0x2d86b70) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02d86f14 + 0x2d86b8c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_48,iVar1,**(undefined4 **)(_UNK_02d86f18 + 0x2d86bc4));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar5 = *(undefined4 **)(_UNK_02d86f1c + 0x2d86be0);
    piVar10 = *(int **)(_UNK_02d86f20 + 0x2d86be8);
    puVar9 = *(undefined4 **)(_UNK_02d86f24 + 0x2d86bf0);
    do {
      do {
        iVar3 = func_0x04878f14(&uStack_38,*puVar5);
        iVar1 = iStack_2c;
        if (iVar3 == 0) {
          func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02d86f40 + 0x2d86e08));
          return 0;
        }
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar1 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02d0fedc(iVar3,uVar2,0);
      } while (iVar3 != 0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar9);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02d0ffc8(iVar3,uVar2,0);
    } while ((iVar3 != 0) || (*(int *)(iVar1 + 0x10) != iStack_24));
    uVar2 = func_0x01524ffc(&iStack_24,0);
    uVar2 = func_0x014e9568(**(undefined4 **)(_UNK_02d86f28 + 0x2d86ccc),uVar2,0);
    iVar6 = **(int **)(_UNK_02d86f2c + 0x2d86ce4);
    iVar3 = *(int *)(iVar6 + 0x1c);
    if (iVar3 == 0) {
      func_0x014909d8(iVar6);
      iVar3 = *(int *)(iVar6 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar7 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02d86f30 + 0x2d86d44) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02d86f30 + 0x2d86d44));
    }
    func_0x026794a8(uVar2,uVar7,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(*puVar9);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0x14);
    uVar8 = *(undefined4 *)(iVar1 + 0x18);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02d1f908(iVar3,uVar2,uVar7,0x46,0x46,uVar8,0,0,0,0,0,0);
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02d86f34 + 0x2d86df0));
  }
  else {
    iVar1 = func_0x029540a4(0x74b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028833e0(iVar1,param_1,0);
  }
  return uVar2;
}

