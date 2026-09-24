
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030452a0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03045558 + 0x30452b8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304555c + 0x30452cc));
    func_0x01438628(*(undefined4 *)(_UNK_03045560 + 0x30452d8));
    func_0x01438628(*(undefined4 *)(_UNK_03045564 + 0x30452e4));
    func_0x01438628(*(undefined4 *)(_UNK_03045568 + 0x30452f0));
    func_0x01438628(*(undefined4 *)(_UNK_0304556c + 0x30452fc));
    func_0x01438628(*(undefined4 *)(_UNK_03045570 + 0x3045308));
    func_0x01438628(*(undefined4 *)(_UNK_03045574 + 0x3045314));
    func_0x01438628(*(undefined4 *)(_UNK_03045578 + 0x3045320));
    func_0x01438628(*(undefined4 *)(_UNK_0304557c + 0x304532c));
    func_0x01438628(*(undefined4 *)(_UNK_03045580 + 0x3045338));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x73cb,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03045584 + 0x30453a8));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03045588 + 0x30453bc));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_0304558c + 0x30453e0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03045590 + 0x30453fc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370c788(iVar1,**(undefined4 **)(_UNK_03045594 + 0x304541c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03045598 + 0x3045448));
      puVar5 = *(undefined4 **)(_UNK_0304559c + 0x304545c);
      puVar7 = *(undefined4 **)(_UNK_030455a0 + 0x3045464);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_030455a4 + 0x30454bc));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x73cb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02917be8(iVar1,param_1,0);
  }
  return iVar1;
}

