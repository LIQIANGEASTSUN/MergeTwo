
/* WARNING: Possible PIC construction at 0x02be8cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02be8cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02be8d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02be8cf4) */
/* WARNING: Removing unreachable block (ram,0x02be8cbc) */
/* WARNING: Removing unreachable block (ram,0x02be8d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be8ba8(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  
  pcVar6 = (char *)(_UNK_02be8d48 + 0x2be8bb8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be8d4c + 0x2be8bcc));
    func_0x01438628(*(undefined4 *)(_UNK_02be8d50 + 0x2be8bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02be8d54 + 0x2be8be4));
    func_0x01438628(*(undefined4 *)(_UNK_02be8d58 + 0x2be8bf0));
    func_0x01438628(*(undefined4 *)(_UNK_02be8d5c + 0x2be8bfc));
    func_0x01438628(*(undefined4 *)(_UNK_02be8d60 + 0x2be8c08));
    func_0x01438628(*(undefined4 *)(_UNK_02be8d64 + 0x2be8c14));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_02be8d68 + 0x2be8c28);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar7;
  }
  uVar8 = **(undefined4 **)(iVar3 + 0x5c);
  uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02be8d6c + 0x2be8c4c));
  func_0x04a542e0(uVar4,uVar8,**(undefined4 **)(_UNK_02be8d70 + 0x2be8c6c),0);
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02be8d74 + 0x2be8c80));
  func_0x02b54484(uVar8,10,uVar4,0);
  piVar7 = *(int **)(_UNK_02be8d78 + 0x2be8ca8);
  **(undefined4 **)(*piVar7 + 0x5c) = uVar8;
  uVar5 = *(uint *)(*piVar7 + 0x5c);
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + (uVar5 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

