
/* WARNING: Possible PIC construction at 0x01cc33cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cc3460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc33d0) */
/* WARNING: Removing unreachable block (ram,0x01cc33ec) */
/* WARNING: Removing unreachable block (ram,0x01cc33f4) */
/* WARNING: Removing unreachable block (ram,0x01cc3464) */
/* WARNING: Removing unreachable block (ram,0x01cc346c) */
/* WARNING: Removing unreachable block (ram,0x01cc3470) */
/* WARNING: Removing unreachable block (ram,0x01cc34bc) */
/* WARNING: Removing unreachable block (ram,0x01cc34c0) */
/* WARNING: Removing unreachable block (ram,0x01cc3404) */
/* WARNING: Removing unreachable block (ram,0x01cc3410) */
/* WARNING: Removing unreachable block (ram,0x01cc3418) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc31f4(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01cc34f0 + 0x1cc3208);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc34f4 + 0x1cc321c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc34f8 + 0x1cc3228));
    func_0x01438628(*(undefined4 *)(_UNK_01cc34fc + 0x1cc3234));
    func_0x01438628(*(undefined4 *)(_UNK_01cc3500 + 0x1cc3240));
    func_0x01438628(*(undefined4 *)(_UNK_01cc3504 + 0x1cc324c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc3508 + 0x1cc3258));
    func_0x01438628(*(undefined4 *)(_UNK_01cc350c + 0x1cc3264));
    func_0x01438628(*(undefined4 *)(_UNK_01cc3510 + 0x1cc3270));
    func_0x01438628(*(undefined4 *)(_UNK_01cc3514 + 0x1cc327c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc3518 + 0x1cc3288));
    func_0x01438628(*(undefined4 *)(_UNK_01cc351c + 0x1cc3294));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x94b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x94b,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar3 = FUN_01cc28c8(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar3 + 0xc) != '\0') {
    iVar3 = FUN_01cc28c8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar3 + 0x30)) {
      if (*(int *)(**(int **)(_UNK_01cc3520 + 0x1cc3334) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01cc3524 + 0x1cc3350));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01cc3528 + 0x1cc3370));
      func_0x03a062d0(uVar8,param_1,**(undefined4 **)(_UNK_01cc352c + 0x1cc3390),0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024f0f0c(iVar3,uVar8,**(undefined4 **)(_UNK_01cc3530 + 0x1cc33b4));
      puVar6 = (undefined4 *)(param_1 + 0x3c);
      *puVar6 = uVar8;
      if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
        puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar6 >> 0x11) * 4);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

