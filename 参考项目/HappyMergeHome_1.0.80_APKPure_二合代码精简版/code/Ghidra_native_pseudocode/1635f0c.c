
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01645f0c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01646244 + 0x1645f24);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01646248 + 0x1645f38));
    func_0x01438628(*(undefined4 *)(_UNK_0164624c + 0x1645f44));
    func_0x01438628(*(undefined4 *)(_UNK_01646250 + 0x1645f50));
    func_0x01438628(*(undefined4 *)(_UNK_01646254 + 0x1645f5c));
    func_0x01438628(*(undefined4 *)(_UNK_01646258 + 0x1645f68));
    func_0x01438628(*(undefined4 *)(_UNK_0164625c + 0x1645f74));
    func_0x01438628(*(undefined4 *)(_UNK_01646260 + 0x1645f80));
    func_0x01438628(*(undefined4 *)(_UNK_01646264 + 0x1645f8c));
    func_0x01438628(*(undefined4 *)(_UNK_01646268 + 0x1645f98));
    func_0x01438628(*(undefined4 *)(_UNK_0164626c + 0x1645fa4));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x861f,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_01646270 + 0x1646024) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01646274 + 0x1646040));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01646278 + 0x1646060));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x3a4) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x024f10ac(*(int *)(iVar1 + 0x3a4),**(undefined4 **)(_UNK_01646284 + 0x1646090)
                               );
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f10bc(&uStack_30,iVar1,**(undefined4 **)(_UNK_01646288 + 0x16460b8));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_0164628c + 0x16460d8);
        uVar5 = 0;
        iVar1 = 0;
        while (iVar2 = func_0x015162bc(&uStack_30,*puVar6), iVar2 != 0) {
          if (iStack_24 != 0) {
            uVar3 = *(uint *)(iStack_24 + 0x28);
            iVar2 = *(int *)(iStack_24 + 0x2c);
            if (((int)(iVar1 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 !=
                 (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)(uVar5 < uVar3)))) &&
               (uVar5 = uVar3, iVar1 = iVar2, *(char *)(iStack_24 + 0x40) == '\0')) {
              bVar7 = false;
            }
          }
        }
        func_0x024f10c0(&uStack_30,**(undefined4 **)(_UNK_01646290 + 0x164612c));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_0164627c + 0x164615c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01646280 + 0x1646178));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x026ffbe0(iVar2,0);
      iVar2 = (int)((ulonglong)uVar9 >> 0x20);
      bVar7 = (uint)uVar9 < uVar5;
      if ((int)(iVar2 - (iVar1 + (uint)bVar7)) < 0 !=
          (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)bVar7))) {
        uVar8 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x861f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

