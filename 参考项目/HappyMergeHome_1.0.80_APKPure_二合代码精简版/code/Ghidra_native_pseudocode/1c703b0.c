
/* WARNING: Possible PIC construction at 0x01c8109c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01c81130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c810a0) */
/* WARNING: Removing unreachable block (ram,0x01c810bc) */
/* WARNING: Removing unreachable block (ram,0x01c810c4) */
/* WARNING: Removing unreachable block (ram,0x01c81134) */
/* WARNING: Removing unreachable block (ram,0x01c8113c) */
/* WARNING: Removing unreachable block (ram,0x01c81140) */
/* WARNING: Removing unreachable block (ram,0x01c81164) */
/* WARNING: Removing unreachable block (ram,0x01c81168) */
/* WARNING: Removing unreachable block (ram,0x01c811b0) */
/* WARNING: Removing unreachable block (ram,0x01c81174) */
/* WARNING: Removing unreachable block (ram,0x01c810d4) */
/* WARNING: Removing unreachable block (ram,0x01c810e0) */
/* WARNING: Removing unreachable block (ram,0x01c810e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c803b0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  iVar3 = func_0x02953fd4(0xacd4,0);
  if (iVar3 == 0) {
    func_0x01c80aac(param_1);
    pcVar5 = (char *)(_UNK_01c811b4 + 0x1c80e14);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01c811b8 + 0x1c80e28));
      func_0x01438628(*(undefined4 *)(_UNK_01c811bc + 0x1c80e34));
      func_0x01438628(*(undefined4 *)(_UNK_01c811c0 + 0x1c80e40));
      func_0x01438628(*(undefined4 *)(_UNK_01c811c4 + 0x1c80e4c));
      func_0x01438628(*(undefined4 *)(_UNK_01c811c8 + 0x1c80e58));
      func_0x01438628(*(undefined4 *)(_UNK_01c811cc + 0x1c80e64));
      func_0x01438628(*(undefined4 *)(_UNK_01c811d0 + 0x1c80e70));
      func_0x01438628(*(undefined4 *)(_UNK_01c811d4 + 0x1c80e7c));
      func_0x01438628(*(undefined4 *)(_UNK_01c811d8 + 0x1c80e88));
      func_0x01438628(*(undefined4 *)(_UNK_01c811dc + 0x1c80e94));
      func_0x01438628(*(undefined4 *)(_UNK_01c811e0 + 0x1c80ea0));
      func_0x01438628(*(undefined4 *)(_UNK_01c811e4 + 0x1c80eac));
      func_0x01438628(*(undefined4 *)(_UNK_01c811e8 + 0x1c80eb8));
      func_0x01438628(*(undefined4 *)(_UNK_01c811ec + 0x1c80ec4));
      *pcVar5 = '\x01';
    }
    iVar3 = func_0x02953fd4(0xacdc,0);
    if (iVar3 == 0) {
      piVar6 = (int *)(param_1 + 0x40);
      iVar3 = *piVar6;
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        return;
      }
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0x50) == '\0') {
        if (*(int *)(**(int **)(_UNK_01c811f0 + 0x1c80f60) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_01c811f4 + 0x1c80f7c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x020e9710(iVar3,0);
        if (iVar3 != 0) {
          iVar7 = FUN_01c733a0(param_1);
          uVar8 = *(undefined4 *)(iVar3 + 0x1b0);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x026ae9e8(iVar7,uVar8,0);
        }
        iVar3 = FUN_01c733a0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x026aee58(iVar3,1,0);
      }
      if (*(int *)(**(int **)(_UNK_01c811f8 + 0x1c81008) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01c811fc + 0x1c81024));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
      uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01c81200 + 0x1c81044));
      func_0x03a062d0(uVar8,param_1,**(undefined4 **)(_UNK_01c81204 + 0x1c81064),0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f0f0c(iVar3,uVar8,**(undefined4 **)(_UNK_01c81208 + 0x1c81088));
      *piVar6 = iVar3;
      if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
        return;
      }
      puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar6 >> 0x11) * 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
      return;
    }
    iVar3 = func_0x029540a4(0xacdc,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0xacd4,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
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

