/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemComponentTable$$.cctor RVA 0x2117a40 =====

/* WARNING: Possible PIC construction at 0x02127f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02127fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02127fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021280c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021281c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021282ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021282ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021283c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021284c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02febf44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02febfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02fec028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02febfb0) */
/* WARNING: Removing unreachable block (ram,0x02febfd8) */
/* WARNING: Removing unreachable block (ram,0x02febfdc) */
/* WARNING: Removing unreachable block (ram,0x02fec00c) */
/* WARNING: Removing unreachable block (ram,0x02fec010) */
/* WARNING: Removing unreachable block (ram,0x02febf48) */
/* WARNING: Removing unreachable block (ram,0x02febf74) */
/* WARNING: Removing unreachable block (ram,0x02febf78) */
/* WARNING: Removing unreachable block (ram,0x02febf90) */
/* WARNING: Removing unreachable block (ram,0x02febf94) */
/* WARNING: Removing unreachable block (ram,0x0212850c) */
/* WARNING: Removing unreachable block (ram,0x021284cc) */
/* WARNING: Removing unreachable block (ram,0x0212848c) */
/* WARNING: Removing unreachable block (ram,0x0212844c) */
/* WARNING: Removing unreachable block (ram,0x0212840c) */
/* WARNING: Removing unreachable block (ram,0x021283cc) */
/* WARNING: Removing unreachable block (ram,0x0212838c) */
/* WARNING: Removing unreachable block (ram,0x0212834c) */
/* WARNING: Removing unreachable block (ram,0x021282f0) */
/* WARNING: Removing unreachable block (ram,0x021282b0) */
/* WARNING: Removing unreachable block (ram,0x02128204) */
/* WARNING: Removing unreachable block (ram,0x0212821c) */
/* WARNING: Removing unreachable block (ram,0x02128224) */
/* WARNING: Removing unreachable block (ram,0x02128234) */
/* WARNING: Removing unreachable block (ram,0x02128240) */
/* WARNING: Removing unreachable block (ram,0x02128248) */
/* WARNING: Removing unreachable block (ram,0x02128280) */
/* WARNING: Removing unreachable block (ram,0x02128290) */
/* WARNING: Removing unreachable block (ram,0x02128294) */
/* WARNING: Removing unreachable block (ram,0x021281c4) */
/* WARNING: Removing unreachable block (ram,0x02128168) */
/* WARNING: Removing unreachable block (ram,0x0212810c) */
/* WARNING: Removing unreachable block (ram,0x021280cc) */
/* WARNING: Removing unreachable block (ram,0x0212808c) */
/* WARNING: Removing unreachable block (ram,0x0212804c) */
/* WARNING: Removing unreachable block (ram,0x02127ff0) */
/* WARNING: Removing unreachable block (ram,0x02127fb0) */
/* WARNING: Removing unreachable block (ram,0x02127f70) */
/* WARNING: Removing unreachable block (ram,0x02fec02c) */
/* WARNING: Removing unreachable block (ram,0x02fec040) */
/* WARNING: Removing unreachable block (ram,0x02fec044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02127a40(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *apuStack_48 [3];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_30;
  
  pcVar4 = (char *)(_UNK_02127bf8 + 0x2127a50);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02127bfc + 0x2127a64));
    func_0x01384978(*(undefined4 *)(_UNK_02127c00 + 0x2127a70));
    func_0x01384978(*(undefined4 *)(_UNK_02127c04 + 0x2127a7c));
    func_0x01384978(*(undefined4 *)(_UNK_02127c08 + 0x2127a88));
    func_0x01384978(*(undefined4 *)(_UNK_02127c0c + 0x2127a94));
    func_0x01384978(*(undefined4 *)(_UNK_02127c10 + 0x2127aa0));
    func_0x01384978(*(undefined4 *)(_UNK_02127c14 + 0x2127aac));
    func_0x01384978(*(undefined4 *)(_UNK_02127c18 + 0x2127ab8));
    func_0x01384978(*(undefined4 *)(_UNK_02127c1c + 0x2127ac4));
    func_0x01384978(*(undefined4 *)(_UNK_02127c20 + 0x2127ad0));
    func_0x01384978(*(undefined4 *)(_UNK_02127c24 + 0x2127adc));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02127c28 + 0x2127af0));
  func_0x03e18468(uVar1,**(undefined4 **)(_UNK_02127c2c + 0x2127b04));
  piVar5 = *(int **)(_UNK_02127c30 + 0x2127b18);
  **(undefined4 **)(*piVar5 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02127c34 + 0x2127b2c));
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02127c38 + 0x2127b40));
  puVar2 = *(undefined4 **)(_UNK_02127c3c + 0x2127b5c);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02127c40 + 0x2127b74));
  puVar2 = *(undefined4 **)(_UNK_02127c44 + 0x2127b90);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02127c48 + 0x2127ba8));
  puVar2 = *(undefined4 **)(_UNK_02127c4c + 0x2127bc4);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_02127c50 + 0x2127bdc));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  pcVar4 = (char *)(_UNK_0212856c + 0x2127c64);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02128570 + 0x2127c78));
    func_0x01384978(*(undefined4 *)(_UNK_02128574 + 0x2127c84));
    func_0x01384978(*(undefined4 *)(_UNK_02128578 + 0x2127c90));
    func_0x01384978(*(undefined4 *)(_UNK_0212857c + 0x2127c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02128580 + 0x2127ca8));
    func_0x01384978(*(undefined4 *)(_UNK_02128584 + 0x2127cb4));
    func_0x01384978(*(undefined4 *)(_UNK_02128588 + 0x2127cc0));
    func_0x01384978(*(undefined4 *)(_UNK_0212858c + 0x2127ccc));
    func_0x01384978(*(undefined4 *)(_UNK_02128590 + 0x2127cd8));
    func_0x01384978(*(undefined4 *)(_UNK_02128594 + 0x2127ce4));
    func_0x01384978(*(undefined4 *)(_UNK_02128598 + 0x2127cf0));
    func_0x01384978(*(undefined4 *)(_UNK_0212859c + 0x2127cfc));
    func_0x01384978(*(undefined4 *)(_UNK_021285a0 + 0x2127d08));
    func_0x01384978(*(undefined4 *)(_UNK_021285a4 + 0x2127d14));
    func_0x01384978(*(undefined4 *)(_UNK_021285a8 + 0x2127d20));
    func_0x01384978(*(undefined4 *)(_UNK_021285ac + 0x2127d2c));
    func_0x01384978(*(undefined4 *)(_UNK_021285b0 + 0x2127d38));
    func_0x01384978(*(undefined4 *)(_UNK_021285b4 + 0x2127d44));
    func_0x01384978(*(undefined4 *)(_UNK_021285b8 + 0x2127d50));
    func_0x01384978(*(undefined4 *)(_UNK_021285bc + 0x2127d5c));
    func_0x01384978(*(undefined4 *)(_UNK_021285c0 + 0x2127d68));
    func_0x01384978(*(undefined4 *)(_UNK_021285c4 + 0x2127d74));
    func_0x01384978(*(undefined4 *)(_UNK_021285c8 + 0x2127d80));
    func_0x01384978(*(undefined4 *)(_UNK_021285cc + 0x2127d8c));
    func_0x01384978(*(undefined4 *)(_UNK_021285d0 + 0x2127d98));
    func_0x01384978(*(undefined4 *)(_UNK_021285d4 + 0x2127da4));
    func_0x01384978(*(undefined4 *)(_UNK_021285d8 + 0x2127db0));
    func_0x01384978(*(undefined4 *)(_UNK_021285dc + 0x2127dbc));
    func_0x01384978(*(undefined4 *)(_UNK_021285e0 + 0x2127dc8));
    func_0x01384978(*(undefined4 *)(_UNK_021285e4 + 0x2127dd4));
    func_0x01384978(*(undefined4 *)(_UNK_021285e8 + 0x2127de0));
    func_0x01384978(*(undefined4 *)(_UNK_021285ec + 0x2127dec));
    func_0x01384978(*(undefined4 *)(_UNK_021285f0 + 0x2127df8));
    func_0x01384978(*(undefined4 *)(_UNK_021285f4 + 0x2127e04));
    func_0x01384978(*(undefined4 *)(_UNK_021285f8 + 0x2127e10));
    func_0x01384978(*(undefined4 *)(_UNK_021285fc + 0x2127e1c));
    func_0x01384978(*(undefined4 *)(_UNK_02128600 + 0x2127e28));
    func_0x01384978(*(undefined4 *)(_UNK_02128604 + 0x2127e34));
    func_0x01384978(*(undefined4 *)(_UNK_02128608 + 0x2127e40));
    func_0x01384978(*(undefined4 *)(_UNK_0212860c + 0x2127e4c));
    func_0x01384978(*(undefined4 *)(_UNK_02128610 + 0x2127e58));
    func_0x01384978(*(undefined4 *)(_UNK_02128614 + 0x2127e64));
    func_0x01384978(*(undefined4 *)(_UNK_02128618 + 0x2127e70));
    func_0x01384978(*(undefined4 *)(_UNK_0212861c + 0x2127e7c));
    func_0x01384978(*(undefined4 *)(_UNK_02128620 + 0x2127e88));
    func_0x01384978(*(undefined4 *)(_UNK_02128624 + 0x2127e94));
    func_0x01384978(*(undefined4 *)(_UNK_02128628 + 0x2127ea0));
    func_0x01384978(*(undefined4 *)(_UNK_0212862c + 0x2127eac));
    func_0x01384978(*(undefined4 *)(_UNK_02128630 + 0x2127eb8));
    func_0x01384978(*(undefined4 *)(_UNK_02128634 + 0x2127ec4));
    *pcVar4 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb3ac,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb3ac,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar1 = 0;
    puStack_30 = (undefined4 *)0x0;
    func_0x0245494c(apuStack_48,0);
    puStack_30 = apuStack_48[0];
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&puStack_30,*(int *)(iVar3 + 0x10),0);
      uVar1 = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar1 = 1;
      }
    }
    iVar7 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar6,&puStack_30,uVar1,0,0);
    return;
  }
  puVar2 = *(undefined4 **)(_UNK_02128638 + 0x2127f18);
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02128700(uVar1,0,**(undefined4 **)(_UNK_0212863c + 0x2127f30));
  if (*(int *)(**(int **)(_UNK_02128640 + 0x2127f44) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = **(int **)(_UNK_02128644 + 0x2127f68);
  piVar5 = *(int **)(iVar3 + 0x1c);
  uStack_38 = uVar1;
  puStack_30 = puVar2;
  if (piVar5 == (int *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02fec064 + 0x2febe34),0,uVar1);
    func_0x01384978(*(undefined4 *)(_UNK_02fec068 + 0x2febe40));
    func_0x01384978(*(undefined4 *)(_UNK_02fec06c + 0x2febe4c));
    func_0x01384978(*(undefined4 *)(_UNK_02fec070 + 0x2febe58));
    func_0x01384978(*(undefined4 *)(_UNK_02fec074 + 0x2febe64));
    func_0x01384978(*(undefined4 *)(_UNK_02fec078 + 0x2febe70));
    func_0x01384978(*(undefined4 *)(_UNK_02fec07c + 0x2febe7c));
    piVar5 = *(int **)(iVar3 + 0x1c);
    if (piVar5 == (int *)0x0) {
      func_0x0140024c(iVar3);
      piVar5 = *(int **)(iVar3 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar5 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  uVar1 = func_0x01384be4();
  func_0x0430dad8(uVar1,*(undefined4 *)(*(int *)(iVar3 + 0x1c) + 4));
  iVar7 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x014001f0();
  }
  **(undefined4 **)(iVar7 + 0x5c) = uVar1;
  if ((*(ushort *)(*(int *)(*(int *)(iVar3 + 0x1c) + 8) + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  piVar5 = *(int **)(_UNK_02fec080 + 0x2febf04);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar5;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_3c = 0x2febf48;
  apuStack_48[0] =
       *(undefined4 **)
        (*(int *)(*(int *)(**(int **)(_UNK_02fec084 + 0x2febf40) + 0x10) + 0x60) + 0x88);
  func_0x03dcfe28(iVar3,1,uVar1,2);
  return;
}



// ===== FAT.Merge.ItemComponentTable$$_Init RVA 0x2117c54 =====

/* WARNING: Possible PIC construction at 0x02127f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02127fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02127fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021280c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021281c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021282ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021282ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021283c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021284c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02128508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02febf44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02febfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02fec028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02febfb0) */
/* WARNING: Removing unreachable block (ram,0x02febfd8) */
/* WARNING: Removing unreachable block (ram,0x02febfdc) */
/* WARNING: Removing unreachable block (ram,0x02fec00c) */
/* WARNING: Removing unreachable block (ram,0x02fec010) */
/* WARNING: Removing unreachable block (ram,0x02febf48) */
/* WARNING: Removing unreachable block (ram,0x02febf74) */
/* WARNING: Removing unreachable block (ram,0x02febf78) */
/* WARNING: Removing unreachable block (ram,0x02febf90) */
/* WARNING: Removing unreachable block (ram,0x02febf94) */
/* WARNING: Removing unreachable block (ram,0x0212850c) */
/* WARNING: Removing unreachable block (ram,0x021284cc) */
/* WARNING: Removing unreachable block (ram,0x0212848c) */
/* WARNING: Removing unreachable block (ram,0x0212844c) */
/* WARNING: Removing unreachable block (ram,0x0212840c) */
/* WARNING: Removing unreachable block (ram,0x021283cc) */
/* WARNING: Removing unreachable block (ram,0x0212838c) */
/* WARNING: Removing unreachable block (ram,0x0212834c) */
/* WARNING: Removing unreachable block (ram,0x021282f0) */
/* WARNING: Removing unreachable block (ram,0x021282b0) */
/* WARNING: Removing unreachable block (ram,0x02128204) */
/* WARNING: Removing unreachable block (ram,0x0212821c) */
/* WARNING: Removing unreachable block (ram,0x02128224) */
/* WARNING: Removing unreachable block (ram,0x02128234) */
/* WARNING: Removing unreachable block (ram,0x02128240) */
/* WARNING: Removing unreachable block (ram,0x02128248) */
/* WARNING: Removing unreachable block (ram,0x02128280) */
/* WARNING: Removing unreachable block (ram,0x02128290) */
/* WARNING: Removing unreachable block (ram,0x02128294) */
/* WARNING: Removing unreachable block (ram,0x021281c4) */
/* WARNING: Removing unreachable block (ram,0x02128168) */
/* WARNING: Removing unreachable block (ram,0x0212810c) */
/* WARNING: Removing unreachable block (ram,0x021280cc) */
/* WARNING: Removing unreachable block (ram,0x0212808c) */
/* WARNING: Removing unreachable block (ram,0x0212804c) */
/* WARNING: Removing unreachable block (ram,0x02127ff0) */
/* WARNING: Removing unreachable block (ram,0x02127fb0) */
/* WARNING: Removing unreachable block (ram,0x02127f70) */
/* WARNING: Removing unreachable block (ram,0x02fec02c) */
/* WARNING: Removing unreachable block (ram,0x02fec040) */
/* WARNING: Removing unreachable block (ram,0x02fec044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02127c54(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *apuStack_48 [2];
  undefined4 *puStack_30;
  
  pcVar3 = (char *)(_UNK_0212856c + 0x2127c64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02128570 + 0x2127c78));
    func_0x01384978(*(undefined4 *)(_UNK_02128574 + 0x2127c84));
    func_0x01384978(*(undefined4 *)(_UNK_02128578 + 0x2127c90));
    func_0x01384978(*(undefined4 *)(_UNK_0212857c + 0x2127c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02128580 + 0x2127ca8));
    func_0x01384978(*(undefined4 *)(_UNK_02128584 + 0x2127cb4));
    func_0x01384978(*(undefined4 *)(_UNK_02128588 + 0x2127cc0));
    func_0x01384978(*(undefined4 *)(_UNK_0212858c + 0x2127ccc));
    func_0x01384978(*(undefined4 *)(_UNK_02128590 + 0x2127cd8));
    func_0x01384978(*(undefined4 *)(_UNK_02128594 + 0x2127ce4));
    func_0x01384978(*(undefined4 *)(_UNK_02128598 + 0x2127cf0));
    func_0x01384978(*(undefined4 *)(_UNK_0212859c + 0x2127cfc));
    func_0x01384978(*(undefined4 *)(_UNK_021285a0 + 0x2127d08));
    func_0x01384978(*(undefined4 *)(_UNK_021285a4 + 0x2127d14));
    func_0x01384978(*(undefined4 *)(_UNK_021285a8 + 0x2127d20));
    func_0x01384978(*(undefined4 *)(_UNK_021285ac + 0x2127d2c));
    func_0x01384978(*(undefined4 *)(_UNK_021285b0 + 0x2127d38));
    func_0x01384978(*(undefined4 *)(_UNK_021285b4 + 0x2127d44));
    func_0x01384978(*(undefined4 *)(_UNK_021285b8 + 0x2127d50));
    func_0x01384978(*(undefined4 *)(_UNK_021285bc + 0x2127d5c));
    func_0x01384978(*(undefined4 *)(_UNK_021285c0 + 0x2127d68));
    func_0x01384978(*(undefined4 *)(_UNK_021285c4 + 0x2127d74));
    func_0x01384978(*(undefined4 *)(_UNK_021285c8 + 0x2127d80));
    func_0x01384978(*(undefined4 *)(_UNK_021285cc + 0x2127d8c));
    func_0x01384978(*(undefined4 *)(_UNK_021285d0 + 0x2127d98));
    func_0x01384978(*(undefined4 *)(_UNK_021285d4 + 0x2127da4));
    func_0x01384978(*(undefined4 *)(_UNK_021285d8 + 0x2127db0));
    func_0x01384978(*(undefined4 *)(_UNK_021285dc + 0x2127dbc));
    func_0x01384978(*(undefined4 *)(_UNK_021285e0 + 0x2127dc8));
    func_0x01384978(*(undefined4 *)(_UNK_021285e4 + 0x2127dd4));
    func_0x01384978(*(undefined4 *)(_UNK_021285e8 + 0x2127de0));
    func_0x01384978(*(undefined4 *)(_UNK_021285ec + 0x2127dec));
    func_0x01384978(*(undefined4 *)(_UNK_021285f0 + 0x2127df8));
    func_0x01384978(*(undefined4 *)(_UNK_021285f4 + 0x2127e04));
    func_0x01384978(*(undefined4 *)(_UNK_021285f8 + 0x2127e10));
    func_0x01384978(*(undefined4 *)(_UNK_021285fc + 0x2127e1c));
    func_0x01384978(*(undefined4 *)(_UNK_02128600 + 0x2127e28));
    func_0x01384978(*(undefined4 *)(_UNK_02128604 + 0x2127e34));
    func_0x01384978(*(undefined4 *)(_UNK_02128608 + 0x2127e40));
    func_0x01384978(*(undefined4 *)(_UNK_0212860c + 0x2127e4c));
    func_0x01384978(*(undefined4 *)(_UNK_02128610 + 0x2127e58));
    func_0x01384978(*(undefined4 *)(_UNK_02128614 + 0x2127e64));
    func_0x01384978(*(undefined4 *)(_UNK_02128618 + 0x2127e70));
    func_0x01384978(*(undefined4 *)(_UNK_0212861c + 0x2127e7c));
    func_0x01384978(*(undefined4 *)(_UNK_02128620 + 0x2127e88));
    func_0x01384978(*(undefined4 *)(_UNK_02128624 + 0x2127e94));
    func_0x01384978(*(undefined4 *)(_UNK_02128628 + 0x2127ea0));
    func_0x01384978(*(undefined4 *)(_UNK_0212862c + 0x2127eac));
    func_0x01384978(*(undefined4 *)(_UNK_02128630 + 0x2127eb8));
    func_0x01384978(*(undefined4 *)(_UNK_02128634 + 0x2127ec4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    puStack_30 = (undefined4 *)0x0;
    func_0x0245494c(apuStack_48,0);
    puStack_30 = apuStack_48[0];
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&puStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar5,&puStack_30,uVar4,0,0);
    return;
  }
  puVar6 = *(undefined4 **)(_UNK_02128638 + 0x2127f18);
  uVar4 = func_0x01384be4(*puVar6);
  func_0x02128700(uVar4,0,**(undefined4 **)(_UNK_0212863c + 0x2127f30));
  if (*(int *)(**(int **)(_UNK_02128640 + 0x2127f44) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = **(int **)(_UNK_02128644 + 0x2127f68);
  piVar2 = *(int **)(iVar1 + 0x1c);
  puStack_30 = puVar6;
  if (piVar2 == (int *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02fec064 + 0x2febe34),0,uVar4);
    func_0x01384978(*(undefined4 *)(_UNK_02fec068 + 0x2febe40));
    func_0x01384978(*(undefined4 *)(_UNK_02fec06c + 0x2febe4c));
    func_0x01384978(*(undefined4 *)(_UNK_02fec070 + 0x2febe58));
    func_0x01384978(*(undefined4 *)(_UNK_02fec074 + 0x2febe64));
    func_0x01384978(*(undefined4 *)(_UNK_02fec078 + 0x2febe70));
    func_0x01384978(*(undefined4 *)(_UNK_02fec07c + 0x2febe7c));
    piVar2 = *(int **)(iVar1 + 0x1c);
    if (piVar2 == (int *)0x0) {
      func_0x0140024c(iVar1);
      piVar2 = *(int **)(iVar1 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar2 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  uVar4 = func_0x01384be4();
  func_0x0430dad8(uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
  iVar7 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x014001f0();
  }
  **(undefined4 **)(iVar7 + 0x5c) = uVar4;
  if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 8) + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  piVar2 = *(int **)(_UNK_02fec080 + 0x2febf04);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  apuStack_48[0] =
       *(undefined4 **)
        (*(int *)(*(int *)(**(int **)(_UNK_02fec084 + 0x2febf40) + 0x10) + 0x60) + 0x88);
  func_0x03dcfe28(iVar1,1,uVar4,2);
  return;
}



// ===== FAT.Merge.ItemComponentTable.ValidateFunc$$.ctor RVA 0x2118700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02128700(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(int *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = func_0x01384a14(param_3);
  if (iVar2 == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar3 = func_0x01384c08(0,_UNK_02128824 + 0x212876c);
        func_0x01384aa0(uVar3,0);
      }
      goto LAB_02128774;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar2 = _UNK_02128820 + 0x21287d0;
    }
    else {
      iVar2 = func_0x01384a0c(param_3);
      iVar4 = func_0x01385038(param_3);
      if (iVar2 == 0) {
        if (iVar4 == 0) {
          iVar2 = _UNK_0212881c + 0x21287fc;
        }
        else {
          iVar2 = _UNK_02128818 + 0x21287e4;
        }
      }
      else if (iVar4 == 0) {
        iVar2 = _UNK_02128814 + 0x21287f0;
      }
      else {
        iVar2 = _UNK_02128810 + 0x21287c4;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_02128774:
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_021287fc;
    }
    iVar2 = _UNK_0212880c + 0x212874c;
  }
  *(int *)(param_1 + 0xc) = iVar2;
LAB_021287fc:
  *(int *)(param_1 + 0x1c) = _UNK_02128828 + 0x2128808;
  return;
}



// ===== FAT.Merge.ItemComponentTable$$GetEnumByType RVA 0x211882c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212882c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
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
  undefined4 auStack_1c [3];
  
  pcVar6 = (char *)(_UNK_021288f0 + 0x2128840);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021288f4 + 0x2128854));
    func_0x01384978(*(undefined4 *)(_UNK_021288f8 + 0x2128860));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3bd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3bd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar4,0,0);
    uVar9 = func_0x0245498c(&uStack_30,0,0);
    return uVar9;
  }
  piVar7 = *(int **)(_UNK_021288fc + 0x21288b8);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  piVar7 = (int *)**(int **)(iVar1 + 0x5c);
  iVar1 = **(int **)(_UNK_02128900 + 0x21288e0);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar8 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar1) {
        puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xf8);
        goto LAB_02f7c51c;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar1,7);
LAB_02f7c51c:
  iVar1 = (*(code *)*puVar2)(piVar7,param_1,auStack_1c,puVar2[1]);
  uVar9 = 0x1a;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.Merge.ItemComponentTable$$CreateComponentByType RVA 0x2118904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02128904(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
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
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_02128b44 + 0x212891c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02128b48 + 0x2128930));
    func_0x01384978(*(undefined4 *)(_UNK_02128b4c + 0x212893c));
    func_0x01384978(*(undefined4 *)(_UNK_02128b50 + 0x2128948));
    func_0x01384978(*(undefined4 *)(_UNK_02128b54 + 0x2128954));
    func_0x01384978(*(undefined4 *)(_UNK_02128b58 + 0x2128960));
    func_0x01384978(*(undefined4 *)(_UNK_02128b5c + 0x212896c));
    func_0x01384978(*(undefined4 *)(_UNK_02128b60 + 0x2128978));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x28f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x28f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_02181940 + 0x2181860);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02181944 + 0x2181874),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02181948 + 0x2181930));
    return uVar9;
  }
  piVar7 = *(int **)(_UNK_02128b64 + 0x21289d4);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  piVar7 = (int *)func_0x02f7c2b0(*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10),param_1,0,
                                  **(undefined4 **)(_UNK_02128b68 + 0x21289fc));
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02128b6c + 0x2128a70),1);
    uStack_14 = param_1;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02128b70 + 0x2128a88),&uStack_14);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar8 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)
       ) {
      uVar9 = func_0x01384c10();
      func_0x01384aa0(uVar9,0);
    }
    if (piVar7[3] == 0) {
      func_0x01384bf4();
    }
    piVar7[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_02128b74 + 0x2128aec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2f28(**(undefined4 **)(_UNK_02128b78 + 0x2128b10),piVar7,0);
    return 0;
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02128b7c + 0x2128a24)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_02128b2c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02128b7c + 0x2128a24),1);
LAB_02128b2c:
                    /* WARNING: Could not recover jumptable at 0x02128b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  return uVar9;
}



// ===== FAT.Merge.ItemComponentTable$$ValidateAndAddComponent RVA 0x2118b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02128b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02128ccc + 0x2128ba0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02128cd0 + 0x2128bb4));
    func_0x01384978(*(undefined4 *)(_UNK_02128cd4 + 0x2128bc0));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x28c,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02128cd8 + 0x2128c2c);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar1,param_3,&iStack_1c,**(undefined4 **)(_UNK_02128cdc + 0x2128c68));
    if (iStack_1c != 0 && iVar1 != 0) {
      iVar2 = (**(code **)(iStack_1c + 0xc))
                        (*(undefined4 *)(iStack_1c + 0x20),param_2,*(undefined4 *)(iStack_1c + 0x14)
                        );
      iVar1 = 0;
      if (iVar2 == 0) {
        return;
      }
    }
    if (param_1 == 0) {
      func_0x01384bf0(iVar1);
    }
    FUN_0211aa64(param_1,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x28c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02181b50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemComponentTable$$CalculateSerializeDelta RVA 0x2118ce0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02128ce0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02128f2c + 0x2128cfc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02128f30 + 0x2128d10));
    func_0x01384978(*(undefined4 *)(_UNK_02128f34 + 0x2128d1c));
    func_0x01384978(*(undefined4 *)(_UNK_02128f38 + 0x2128d28));
    func_0x01384978(*(undefined4 *)(_UNK_02128f3c + 0x2128d34));
    func_0x01384978(*(undefined4 *)(_UNK_02128f40 + 0x2128d40));
    func_0x01384978(*(undefined4 *)(_UNK_02128f44 + 0x2128d4c));
    func_0x01384978(*(undefined4 *)(_UNK_02128f48 + 0x2128d58));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb3be,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_02128f4c + 0x2128de4);
    uVar5 = *(uint *)(param_1 + 0x20);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_40,iVar1,**(undefined4 **)(_UNK_02128f50 + 0x2128e20));
    uVar2 = 0;
    puVar7 = *(undefined4 **)(_UNK_02128f54 + 0x2128e40);
    while (uVar8 = func_0x03fa87cc(&uStack_40,*puVar7), uVar3 = (uint)((ulonglong)uVar8 >> 0x20),
          (int)uVar8 != 0) {
      if (iStack_30 != 0) {
        uVar3 = uStack_34 & 0x1f;
      }
      if (iStack_30 != 0 && (uVar5 >> (uVar3 & 0xff) & 1) != 0) {
        uVar3 = (**(code **)(iStack_30 + 0xc))
                          (*(undefined4 *)(iStack_30 + 0x20),param_1,param_2,
                           *(undefined4 *)(iStack_30 + 0x14));
        uVar2 = uVar2 | uVar3;
      }
    }
    func_0x03fa890c(&uStack_40,**(undefined4 **)(_UNK_02128f58 + 0x2128e94));
  }
  else {
    iVar1 = func_0x0229f13c(0xb3be,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2 & 1;
}



// ===== FAT.Merge.ItemComponentTable$$IsComponentItemSource RVA 0x2118f64 =====

uint FUN_02128f64(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0xb3bf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3bf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (param_1 - 1U < 0x10) {
    return 0xb043U >> (param_1 - 1U & 0xff) & 1;
  }
  return 0;
}



// ===== FAT.Merge.ItemComponentTable$$Free RVA 0x2118fd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02128fd8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_18;
  int *piStack_14;
  
  pcVar7 = (char *)(_UNK_0212923c + 0x2128ff4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02129240 + 0x2129008));
    func_0x01384978(*(undefined4 *)(_UNK_02129244 + 0x2129014));
    func_0x01384978(*(undefined4 *)(_UNK_02129248 + 0x2129020));
    func_0x01384978(*(undefined4 *)(_UNK_0212924c + 0x212902c));
    func_0x01384978(*(undefined4 *)(_UNK_02129250 + 0x2129038));
    func_0x01384978(*(undefined4 *)(_UNK_02129254 + 0x2129044));
    func_0x01384978(*(undefined4 *)(_UNK_02129258 + 0x2129050));
    *pcVar7 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x27f,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_0212925c + 0x21290b4);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar1,param_1,&piStack_14,**(undefined4 **)(_UNK_02129260 + 0x21290f0));
    piVar8 = piStack_14;
    if (iVar1 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02129268 + 0x212916c),1);
      uStack_18 = param_1;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0212926c + 0x2129184),&uStack_18);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_02129270 + 0x21291e8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2f28(**(undefined4 **)(_UNK_02129274 + 0x212920c),piVar8,0);
    }
    else {
      if (piStack_14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_02129264 + 0x2129120)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02129220;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02129264 + 0x2129120),0);
LAB_02129220:
      (*(code *)*puVar2)(piVar8,param_2,puVar2[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x27f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02180dbc(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemComponentTable.SerializeDeltaFunc$$.ctor RVA 0x2119278 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02129278(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(int *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = func_0x01384a14(param_3);
  if (iVar2 == 0) {
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar3 = func_0x01384c08(0,_UNK_02129320 + 0x21292f0);
        func_0x01384aa0(uVar3,0);
      }
      goto LAB_021292f8;
    }
    iVar2 = _UNK_0212931c + 0x21292d4;
  }
  else {
    if (cVar1 != '\x02') {
LAB_021292f8:
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_02129308;
    }
    iVar2 = _UNK_02129318 + 0x21292c0;
  }
  *(int *)(param_1 + 0xc) = iVar2;
LAB_02129308:
  *(int *)(param_1 + 0x1c) = _UNK_02129324 + 0x2129314;
  return;
}



// ===== FAT.Merge.ItemComponentTable.SerializeDeltaFunc$$Invoke RVA 0x2119328 =====

void FUN_02129328(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x02129334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc))
            (*(undefined4 *)(param_1 + 0x20),param_2,param_3,*(undefined4 *)(param_1 + 0x14));
  return;
}



// ===== FAT.Merge.ItemComponentTable.SerializeDeltaFunc$$BeginInvoke RVA 0x2119338 =====

void FUN_02129338(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_14 = param_2;
  uStack_10 = param_3;
  func_0x0138492c(param_1,&uStack_14,param_4,param_5);
  return;
}



// ===== FAT.Merge.ItemComponentTable.SerializeDeltaFunc$$EndInvoke RVA 0x2119368 =====

undefined1 FUN_02129368(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = func_0x01384930(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = (undefined1 *)func_0x01384ac0(iVar1);
  return *puVar2;
}



// ===== FAT.Merge.ItemComponentTable.ValidateFunc$$Invoke RVA 0x2119398 =====

void FUN_02129398(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x021293a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xc))
            (*(undefined4 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



// ===== FAT.Merge.ItemComponentTable.ValidateFunc$$BeginInvoke RVA 0x21193a8 =====

void FUN_021293a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = param_2;
  func_0x0138492c(param_1,&uStack_10);
  return;
}



// ===== FAT.Merge.ItemComponentTable.ValidateFunc$$EndInvoke RVA 0x21193c8 =====

undefined1 FUN_021293c8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = func_0x01384930(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = (undefined1 *)func_0x01384ac0(iVar1);
  return *puVar2;
}



// ===== FAT.Merge.ItemComponentTable.<>c$$.cctor RVA 0x21193f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021293f8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02129450 + 0x2129408);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02129454 + 0x212941c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02129458 + 0x2129430);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.ItemComponentTable.<>c$$.ctor RVA 0x211945c =====

void FUN_0212945c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemComponentTable.<>c$$<_Init>b__8_0 RVA 0x2119464 =====

bool FUN_02129464(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    return *(int *)(param_2 + 0x30) != 0;
  }
  return false;
}



// ===== FAT.Merge.ItemComponentTable$$CreateComponent<object> RVA 0x2fdbd14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02febd14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(int *)(param_1 + 0x1c) == 0) &&
     (func_0x01384978(*(undefined4 *)(_UNK_02febdc0 + 0x2febd34)), *(int *)(param_1 + 0x1c) == 0)) {
    func_0x0140024c(param_1);
  }
  if (*(int *)(**(int **)(_UNK_02febdc4 + 0x2febd54) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = **(int **)(param_1 + 0x1c);
  iVar1 = *(int *)(iVar4 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(iVar4);
    iVar1 = *(int *)(iVar4 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 4);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  uVar2 = func_0x02d921e0(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 8));
  iVar1 = *(int *)(iVar1 + 8);
  uVar3 = extraout_r3;
  if (iVar1 == 0) {
    func_0x02457d50();
    uVar3 = extraout_r3_00;
  }
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x14);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar5 == 0) {
    func_0x02457d50();
    uVar3 = extraout_r3_01;
  }
  if (uVar6 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar2;
  }
  else {
    func_0x0328f170(iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38),
                    uVar3,unaff_r4,unaff_r5);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemComponentTable$$_GetPool<object> RVA 0x2fdbdc8 =====

undefined4 FUN_02febdc8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(param_1);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 4);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  return **(undefined4 **)(iVar1 + 0x5c);
}



// ===== FAT.Merge.ItemComponentTable$$_RegisterItemComponent<object> RVA 0x2fdbe08 =====

/* WARNING: Possible PIC construction at 0x02febf44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02febfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02fec028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02febfb0) */
/* WARNING: Removing unreachable block (ram,0x02febfd8) */
/* WARNING: Removing unreachable block (ram,0x02febfdc) */
/* WARNING: Removing unreachable block (ram,0x02fec00c) */
/* WARNING: Removing unreachable block (ram,0x02fec010) */
/* WARNING: Removing unreachable block (ram,0x02febf48) */
/* WARNING: Removing unreachable block (ram,0x02febf74) */
/* WARNING: Removing unreachable block (ram,0x02febf78) */
/* WARNING: Removing unreachable block (ram,0x02febf90) */
/* WARNING: Removing unreachable block (ram,0x02febf94) */
/* WARNING: Removing unreachable block (ram,0x02fec02c) */
/* WARNING: Removing unreachable block (ram,0x02fec040) */
/* WARNING: Removing unreachable block (ram,0x02fec044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02febe08(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_4 + 0x1c);
  if (piVar1 == (int *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02fec064 + 0x2febe34));
    func_0x01384978(*(undefined4 *)(_UNK_02fec068 + 0x2febe40));
    func_0x01384978(*(undefined4 *)(_UNK_02fec06c + 0x2febe4c));
    func_0x01384978(*(undefined4 *)(_UNK_02fec070 + 0x2febe58));
    func_0x01384978(*(undefined4 *)(_UNK_02fec074 + 0x2febe64));
    func_0x01384978(*(undefined4 *)(_UNK_02fec078 + 0x2febe70));
    func_0x01384978(*(undefined4 *)(_UNK_02fec07c + 0x2febe7c));
    piVar1 = *(int **)(param_4 + 0x1c);
    if (piVar1 == (int *)0x0) {
      func_0x0140024c(param_4);
      piVar1 = *(int **)(param_4 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar1 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  uVar2 = func_0x01384be4();
  func_0x0430dad8(uVar2,*(undefined4 *)(*(int *)(param_4 + 0x1c) + 4));
  iVar3 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x014001f0();
  }
  **(undefined4 **)(iVar3 + 0x5c) = uVar2;
  if ((*(ushort *)(*(int *)(*(int *)(param_4 + 0x1c) + 8) + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  piVar1 = *(int **)(_UNK_02fec080 + 0x2febf04);
  iVar3 = *piVar1;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar1;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x03dcfe28(iVar3,param_1,uVar2,2,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_02fec084 + 0x2febf40) + 0x10) + 0x60) + 0x88))
  ;
  return;
}

