
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017d4be8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_017d4ee0 + 0x17d4c00);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d4ee4 + 0x17d4c14));
    func_0x01438628(*(undefined4 *)(_UNK_017d4ee8 + 0x17d4c20));
    func_0x01438628(*(undefined4 *)(_UNK_017d4eec + 0x17d4c2c));
    func_0x01438628(*(undefined4 *)(_UNK_017d4ef0 + 0x17d4c38));
    func_0x01438628(*(undefined4 *)(_UNK_017d4ef4 + 0x17d4c44));
    func_0x01438628(*(undefined4 *)(_UNK_017d4ef8 + 0x17d4c50));
    func_0x01438628(*(undefined4 *)(_UNK_017d4efc + 0x17d4c5c));
    func_0x01438628(*(undefined4 *)(_UNK_017d4f00 + 0x17d4c68));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5db8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017d4f04 + 0x17d4cd0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017d0b50();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017d48ec(iVar1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x80) < 0x1c) {
      uVar9 = FUN_017d4624(param_1,0x24);
      iVar3 = (int)uVar9;
      iVar1 = 0;
      iVar4 = (int)((ulonglong)uVar9 >> 0x20);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar3;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        func_0x0152da0c(&uStack_40,iVar4,**(undefined4 **)(_UNK_017d4f08 + 0x17d4d4c));
        iVar1 = 9;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar8 = *(undefined4 **)(_UNK_017d4f0c + 0x17d4d6c);
        piVar6 = *(int **)(_UNK_017d4f10 + 0x17d4d74);
        puVar7 = *(undefined4 **)(_UNK_017d4f14 + 0x17d4d7c);
        do {
          do {
            iVar3 = func_0x015109ec(&uStack_30,*puVar8);
            iVar4 = iStack_24;
            if (iVar3 == 0) {
              iVar1 = 10;
              goto LAB_017d4e20;
            }
          } while ((iStack_24 == 0) || (iVar3 = func_0x02c3f4b4(iStack_24,0), iVar3 < 1));
          if (*(int *)(iVar4 + 0x14) == -1) break;
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(*puVar7);
          uVar2 = func_0x02c3f4b4(iVar4,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x029a6fa8(iVar3,uVar2,0);
        } while ((iVar4 == 0) || (*(int *)(iVar4 + 0x1c) != 200));
LAB_017d4e20:
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017d4f18 + 0x17d4e2c));
        uVar2 = 0;
        if (iVar1 != 9) {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5db8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02869630(iVar1,param_1,0);
  }
  return uVar2;
}

