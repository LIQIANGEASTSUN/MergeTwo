
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018f9a24(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_018f9d1c + 0x18f9a3c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f9d20 + 0x18f9a50));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d24 + 0x18f9a5c));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d28 + 0x18f9a68));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d2c + 0x18f9a74));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d30 + 0x18f9a80));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d34 + 0x18f9a8c));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d38 + 0x18f9a98));
    func_0x01438628(*(undefined4 *)(_UNK_018f9d3c + 0x18f9aa4));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5df5,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018f9d40 + 0x18f9b0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018f5b04();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_018f9728(iVar1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x80) < 0x24) {
      uVar9 = FUN_018f9460(param_1,0x24);
      iVar3 = (int)uVar9;
      iVar1 = 0;
      iVar4 = (int)((ulonglong)uVar9 >> 0x20);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar3;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        func_0x0152da0c(&uStack_40,iVar4,**(undefined4 **)(_UNK_018f9d44 + 0x18f9b88));
        iVar1 = 9;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar8 = *(undefined4 **)(_UNK_018f9d48 + 0x18f9ba8);
        piVar6 = *(int **)(_UNK_018f9d4c + 0x18f9bb0);
        puVar7 = *(undefined4 **)(_UNK_018f9d50 + 0x18f9bb8);
        do {
          do {
            iVar3 = func_0x015109ec(&uStack_30,*puVar8);
            iVar4 = iStack_24;
            if (iVar3 == 0) {
              iVar1 = 10;
              goto LAB_018f9c5c;
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
LAB_018f9c5c:
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018f9d54 + 0x18f9c68));
        uVar2 = 0;
        if (iVar1 != 9) {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5df5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02869630(iVar1,param_1,0);
  }
  return uVar2;
}

