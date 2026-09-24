
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032a7ee4(undefined4 param_1)

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
  
  pcVar5 = (char *)(_UNK_032a81dc + 0x32a7efc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a81e0 + 0x32a7f10));
    func_0x01438628(*(undefined4 *)(_UNK_032a81e4 + 0x32a7f1c));
    func_0x01438628(*(undefined4 *)(_UNK_032a81e8 + 0x32a7f28));
    func_0x01438628(*(undefined4 *)(_UNK_032a81ec + 0x32a7f34));
    func_0x01438628(*(undefined4 *)(_UNK_032a81f0 + 0x32a7f40));
    func_0x01438628(*(undefined4 *)(_UNK_032a81f4 + 0x32a7f4c));
    func_0x01438628(*(undefined4 *)(_UNK_032a81f8 + 0x32a7f58));
    func_0x01438628(*(undefined4 *)(_UNK_032a81fc + 0x32a7f64));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5ddc,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032a8200 + 0x32a7fcc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032a3fc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_032a7be8(iVar1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x80) < 0x24) {
      uVar9 = FUN_032a7920(param_1,0x24);
      iVar3 = (int)uVar9;
      iVar1 = 0;
      iVar4 = (int)((ulonglong)uVar9 >> 0x20);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0xc);
        iVar4 = iVar3;
      }
      if (iVar3 != 0 && iVar1 != 0) {
        func_0x04cfe6f4(&uStack_40,iVar4,**(undefined4 **)(_UNK_032a8204 + 0x32a8048));
        iVar1 = 9;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar8 = *(undefined4 **)(_UNK_032a8208 + 0x32a8068);
        piVar6 = *(int **)(_UNK_032a820c + 0x32a8070);
        puVar7 = *(undefined4 **)(_UNK_032a8210 + 0x32a8078);
        do {
          do {
            iVar3 = func_0x04878f14(&uStack_30,*puVar8);
            iVar4 = iStack_24;
            if (iVar3 == 0) {
              iVar1 = 10;
              goto LAB_032a811c;
            }
          } while ((iStack_24 == 0) || (iVar3 = func_0x02c3f4b4(iStack_24,0), iVar3 < 1));
          if (*(int *)(iVar4 + 0x14) == -1) break;
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(*puVar7);
          uVar2 = func_0x02c3f4b4(iVar4,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x029a6fa8(iVar3,uVar2,0);
        } while ((iVar4 == 0) || (*(int *)(iVar4 + 0x1c) != 200));
LAB_032a811c:
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_032a8214 + 0x32a8128));
        uVar2 = 0;
        if (iVar1 != 9) {
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ddc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02869630(iVar1,param_1,0);
  }
  return uVar2;
}

